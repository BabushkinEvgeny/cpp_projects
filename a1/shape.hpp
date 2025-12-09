#ifndef SHAPE_HPP
#define SHAPE_HPP

struct point_t;
struct rectangle_t;

class Shape
{

public:
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual rectangle_t getFrameRect() const = 0;
    virtual void move(double xDiff, double yDiff) = 0;
    virtual void move(point_t &pos) = 0;
};

#endif
