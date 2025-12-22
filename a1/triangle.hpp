#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "base-types.hpp"
#include "shape.hpp"

class Triangle: public Shape {
public:
    Triangle(const point_t a, const point_t b, const point_t c);
    double getArea() const override;
    rectangle_t getFrameRect() const override;
    void move(double xDiff, double yDiff) override;
    void move(const point_t &pos) override;

private:
    point_t a_;
    point_t b_;
    point_t c_;
    point_t center_;

};

#endif