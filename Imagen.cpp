#include "Imagen.hpp"

Imagen::Imagen(const std::string& path) {

    img = cv::imread(path);

    if (img.empty()) {
        throw std::runtime_error("Error loading image");
    }

}

void Imagen::reduceResolution() {

    cv::resize(img, img, cv::Size(240, 126), 0, 0, cv::INTER_LINEAR); // Utiliza la interpolación lineal

}

void Imagen::applyFilter(FilterType filter, double value) {

    switch (filter) {

        case GRAYSCALE:
            cv::cvtColor(img, img, cv::COLOR_BGR2GRAY);
            break;

        case BRIGHTNESS:
            img.convertTo(img, -1, 1, value); // value is the brightness factor
            break;

        case CONTRAST:
            img.convertTo(img, -1, value, 0); // value is the contrast factor
            break;

        default:
            throw std::invalid_argument("Invalid filter type");
    }

}

void Imagen::rotate(double angle) {

    cv::Point2f center(img.cols / 2.0, img.rows / 2.0);
    cv::Mat rot = cv::getRotationMatrix2D(center, angle, 1.0);
    cv::Rect2f bbox = cv::RotatedRect(cv::Point2f(), img.size(), angle).boundingRect2f();
    rot.at<double>(0, 2) += bbox.width / 2.0 - img.cols / 2.0;
    rot.at<double>(1, 2) += bbox.height / 2.0 - img.rows / 2.0;
    cv::warpAffine(img, img, rot, bbox.size());

}

void Imagen::save(const std::string& path) {

    cv::imwrite(path, img);

}

cv::Mat Imagen::getMat() const {

    return img;

}
