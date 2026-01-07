#include <iostream>
#include "base-types.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "shape.hpp"

void printArea(const Shape& shape);
void printParameters(const Shape& shape);
void printCenterCoordinates(const Shape& shape);
void printInfo(const Shape& shape);

int main()
{
  std::cout << "Lab A1. Babushkin Evgeny, group:3530904/00003\n\n"
            << "Creating an object of type Circle...\n";
  try
  {
    Circle testCircle1({1, 1}, 1.0);
    printInfo(testCircle1);

    std::cout << "Creating an object of type Rectangle...\n";
    Rectangle testReactangle(2, 2, {0, 0});
    printInfo(testReactangle);

    std::cout << "Creating object of type Shape...\n";
    Shape& testShape = testReactangle;
    printInfo(testShape);

    std::cout << "Circle after moving to (0,0):\n";
    testCircle1.move({0.0, 0.0});
    printInfo(testCircle1);

    std::cout << "Circle after moving by (-1,-1):\n";
    testCircle1.move(-1 ,-1);
    printInfo(testCircle1);

    std::cout << "Rectangle after moving to (5,5):\n";
    testReactangle.move({5.0, 5.0});
    printInfo(testReactangle);

    std::cout << "Rectangle after moving by (1,1):\n";
    testReactangle.move(1, 1);
    printInfo(testReactangle);

    std::cout << "Shape after moving to (4,4)\n";
    testShape.move({4.0, 4.0});
    printInfo(testShape);

    std::cout << "Shape after moving by (1,1)\n";
    testShape.move(1, 1);
    printInfo(testShape);
  }
  catch (const std::invalid_argument& ex)
  {
    std::cerr << ex.what();
  }
  return 0;
}

void printArea(const Shape& shape)
{
  std::cout <<"Area of a figure: "<< shape.getArea()<<"\n";
}

void printParameters(const Shape& shape)
{
  std::cout <<"Height: "<< shape.getFrameRect().height<<"\n"
            <<"Width: " << shape.getFrameRect().width<<"\n\n";
}

void printCenterCoordinates(const Shape& shape)
{
  std::cout << "Center coordinates: (" << shape.getFrameRect().pos.x
            << "," << shape.getFrameRect().pos.y << ")\n";
}

void printInfo(const Shape& shape)
{
  printArea(shape);
  printCenterCoordinates(shape);
  printParameters(shape);
}
