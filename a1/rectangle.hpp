#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "base-types.hpp"
#include "shape.hpp"

class Rectangle: public Shape {
    public:
    Rectangle(double width, double height, const point_t &center);

    double getArea() const override;

    rectangle_t getFrameRect() const override;

    void move(double xDiff, double yDiff) override;

    void move(const point_t& pos) override;

    private:
    point_t center_;
    double width_;
    double height_;
};

#endif