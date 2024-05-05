//
// Created by GODWIN on 05/05/2024.
//

#ifndef COMLAB_TASKS_TRIANGLE_H
#define COMLAB_TASKS_TRIANGLE_H


class Triangle {


    // Triangle.h
#pragma once

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double base, double height);
        ~Triangle();

        double getBase() const;
        double getHeight() const;
        void setBase(double base);
        void setHeight(double height);
    };
}





};


#endif //COMLAB_TASKS_TRIANGLE_H
