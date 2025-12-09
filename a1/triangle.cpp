#include "triangle.hpp"
#include <stdexcept>
#define _USE_MATH_DEFINES
#include <cmath>
#include "base-types.hpp"

//add '==' check
Triangle::Triangle(point_t a, point_t b, point_t c):
a_(a),
b_(b),
c_(c) {
    double cX = 0, cY = 0;
    cX = (a.x + b.x + c.x) / 3;
    cY = (a.y + b.y + c.y) / 3;
    center_ = {cX, cY};
};

//Area = ½ |x₁(y₂ − y₃) + x₂(y₃ − y₁) + x₃(y₁ − y₂)|


 double Triangle::getArea() const {
    return 0.5 * abs(a_.x * (b_.y - c_.y) + b_.x * (c_.y - a_.y) + c_.x * (a_.y - b_.y));
};
//todo
rectangle_t Triangle::getFrameRect() const {
    return {};
};

void Triangle::move(double xDiff, double yDiff) {
    a_.x += xDiff;
    a_.y += yDiff;

    b_.x += xDiff;
    b_.y += yDiff;

    c_.x += xDiff;
    c_.y += yDiff;

    center_.x += xDiff;
    center_.y += yDiff;
}

void Triangle::move(point_t &pos) {
    double xDiff = pos.x - center_.x;
    double yDiff = pos.y - center_.y;

    center_ = pos;

    a_.x += xDiff;
    a_.y += yDiff;

    b_.x += xDiff;
    b_.y += yDiff;

    c_.x += xDiff;
    c_.y += yDiff;
}