#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp";
#include "base-types.hpp";

class Circle : public Shape {
    public:
    Circle(point_t &pos, double radius);

    double getArea() const override;

    rectangle_t getFrameRect() const override;

    void move(double xDiff, double yDiff) override;

    void move(point_t &pos) override;
    
    private:
    double radius_;
    point_t center_;
};

#endif