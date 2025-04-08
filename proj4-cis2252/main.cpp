#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"

int main() {
    std::vector<BasicShape*> shapes;

    // Add Circles
    shapes.push_back(new Circle(3.0));
    shapes.push_back(new Circle(5.5));
    shapes.push_back(new Circle(2.1));

    // Add Rectangles
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Rectangle(3.5, 2.5));
    shapes.push_back(new Rectangle(7.0, 3.0));

    // Display whatAmI and getArea
    for (const auto& shape : shapes) {
        std::cout << shape->whatAmI() << " area: " << shape->getArea() << std::endl;
    }

    // Clean up
    for (auto& shape : shapes) {
        delete shape;
    }
    shapes.clear();

    return 0;
}
