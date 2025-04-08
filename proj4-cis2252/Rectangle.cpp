#include "Rectangle.h"

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::getLength() const { return length; }
double Rectangle::getWidth() const { return width; }
void Rectangle::setLength(double l) { length = l; }
void Rectangle::setWidth(double w) { width = w; }

double Rectangle::getPerimeter() const {
    return 2 * (length + width);
}

double Rectangle::getArea() const {
    return length * width;
}

std::string Rectangle::whatAmI() const {
    return "Rectangle";
}
