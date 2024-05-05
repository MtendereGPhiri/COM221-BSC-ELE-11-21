//
// Created by GODWIN on 05/05/2024.
//

#include "Circle.h"
#include "Circle.h"

namespace shapes {
    Circle::Circle() : radius(0) {}

    Circle::Circle(double r) : radius(r) {}

    Circle::~Circle() {}

    double Circle::getRadius() const {
        return radius;
    }

    void Circle::setRadius(double r) {
        radius = r;
    }
}