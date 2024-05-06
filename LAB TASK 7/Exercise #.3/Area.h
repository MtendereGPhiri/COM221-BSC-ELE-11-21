//
// Created by GODWIN on 05/05/2024.
//

#ifndef COMLAB_TASKS_AREA_H
#define COMLAB_TASKS_AREA_H


#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static double calculateArea(const shapes::Square& square);
    static double calculateArea(const shapes::Triangle& triangle);
    static double calculateArea(const shapes::Circle& circle);
};






#endif //COMLAB_TASKS_AREA_H
