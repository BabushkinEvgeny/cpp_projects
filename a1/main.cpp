#include <iostream>
#include "base-types.hpp"
#include "circle.hpp"
#include "rectangle.hpp"
#include "shape.hpp"


void printArea(const Shape& shape);
void printParameters(const Shape& shape);
void printInfo(const Shape& shape);
int main() {
    try {



    } catch(std::invalid_argument &ex) {
        std::cerr << ex.what();
    };

    return 0;
};

void printArea(const Shape& shape) {
    std::cout << "Shape area: " << shape.getArea() << "\n";
};

void printParameters(const Shape& shape) {
    std::cout << "Shape width: " << shape.getFrameRect().width << "\n";
    std::cout << "Shape height: " << shape.getFrameRect().height << "\n";
    std::cout << "Shape center: {" << shape.getFrameRect().pos.x << ", " << 
                shape.getFrameRect().pos.y << "}\n";
}

void printInfo(const Shape& shape) {
    printArea(shape);
    printParameters(shape);
}
