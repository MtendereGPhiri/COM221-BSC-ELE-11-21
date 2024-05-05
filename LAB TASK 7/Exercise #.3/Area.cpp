//
// Created by GODWIN on 05/05/2024.
//

#include "Area.h"
// Area.h

#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

namespace shapes {
    class Area {
    public:
        static double calculateArea(const Square& square);
        static double calculateArea(const Triangle& triangle);
        static double calculateArea(const Circle& circle);
    };
}
