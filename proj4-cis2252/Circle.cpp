#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const { return radius; }
void Circle::setRadius(double r) { radius = r; }

double Circle::getCircumference() const {
    return 2 * M_PI * radius;
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

std::string Circle::whatAmI() const {
    return "Circle";
}
