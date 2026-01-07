#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "shape.hpp"
#include "base-types.hpp"
namespace babushkin {
class Circle : public Shape {
    public:
    Circle(const point_t& center, double radius);

    double getArea() const override;

    rectangle_t getFrameRect() const override;

    void move(double xDiff, double yDiff) override;

    void move(const point_t& pos) override;
    
    private:
    double radius_;
    point_t center_;
};
}
#endif