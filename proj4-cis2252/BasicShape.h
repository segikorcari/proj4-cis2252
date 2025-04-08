#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>

class BasicShape {
public:
    virtual std::string whatAmI() const = 0;
    virtual double getArea() const = 0;
    virtual ~BasicShape() {}
};

#endif
