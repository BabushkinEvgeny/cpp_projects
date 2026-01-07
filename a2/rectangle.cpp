#include "rectangle.hpp"
#include <stdexcept>
#define _USE_MATH_DEFINES
#include <cmath>
#include "base-types.hpp"

Rectangle::Rectangle(double width, double height, const point_t &center):
width_(width),
height_(height),
center_(center) {
    if (width <= 0 || height <= 0) {
        throw std::invalid_argument("width or height <= 0");
    }
};

double Rectangle::getArea() const {
    return ( width_ * height_ );
}

rectangle_t Rectangle::getFrameRect() const {
    return {width_, height_, center_};
};

void Rectangle::move(double xDiff, double yDiff) {
    center_.x += xDiff;
    center_.y += yDiff;
};

void Rectangle::move(const point_t& pos) {
    center_ = pos;
}