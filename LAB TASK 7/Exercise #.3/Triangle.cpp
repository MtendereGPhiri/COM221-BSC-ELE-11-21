//
// Created by GODWIN on 05/05/2024.
//

#include "Triangle.h"



// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() : base(0), height(0) {}

    Triangle::Triangle(double b, double h) : base(b), height(h) {}

    Triangle::~Triangle() {}

    double Triangle::getBase() const {
        return base;
    }

    double Triangle::getHeight() const {
        return height;
    }

    void Triangle::setBase(double b) {
        base = b;
    }

    void Triangle::setHeight(double h) {
        height = h;
    }
}