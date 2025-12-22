#include "circle.hpp"
#include <stdexcept>
#define _USE_MATH_DEFINES
#include <cmath>
#include "base-types.hpp"

Circle::Circle(const point_t& center, double radius):
center_(center),
radius_(radius) {
    if (radius <= 0 ) {
        throw std::invalid_argument("Radius <= 0");
    }
};

double Circle::getArea() const {
    return(M_PI * radius_ * radius_);
};

rectangle_t Circle::getFrameRect() const {
    return {radius_ * 2, radius_ * 2, center_};
};

void Circle::move(double xDiff, double yDiff) {
    center_.x += xDiff;
    center_.y += yDiff;
};

void Circle::move(const point_t& pos) {
    center_ = pos;
};