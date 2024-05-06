//
// Created by GODWIN on 05/05/2024.
//

#ifndef COMLAB_TASKS_SQUARE_H
#define COMLAB_TASKS_SQUARE_H



// Square.cpp

// Square.h

#pragma once

namespace shapes {
    class Square {
    private:
        double sideLength;
    public:
        Square(); // Default constructor
        Square(double side); // Overloaded constructor
        ~Square(); // Destructor
        double getSideLength() const;
        void setSideLength(double side);
    };
}



#endif //COMLAB_TASKS_SQUARE_H
