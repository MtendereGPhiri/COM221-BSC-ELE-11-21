//
// Created by GODWIN on 05/05/2024.
//

#ifndef COMLAB_TASKS_CIRCLE_H
#define COMLAB_TASKS_CIRCLE_H



#pragma once

namespace shapes {

    class Circle {
    private:
        double radius;

    public:
        Circle();
        Circle(double r);
        ~Circle();

        double getRadius() const;
        void setRadius(double r);
    };
}

#endif //COMLAB_TASKS_CIRCLE_H
