#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w);
    double getLength() const;
    double getWidth() const;
    void setLength(double l);
    void setWidth(double w);
    double getPerimeter() const;
    double getArea() const override;
    std::string whatAmI() const override;
};

#endif
