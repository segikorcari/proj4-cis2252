#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"
#include <cmath>

class Circle : public BasicShape {
private:
    double radius;

public:
    Circle(double r);
    double getRadius() const;
    void setRadius(double r);
    double getCircumference() const;
    double getArea() const override;
    std::string whatAmI() const override;
};

#endif
