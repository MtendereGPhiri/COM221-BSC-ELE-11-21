#ifndef COMLAB_TASKS_RECTANGLE_H
#define COMLAB_TASKS_RECTANGLE_H

//typedef int float;

#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(float length, float width, float bottom, float right)
{
    itslength = length;
    itsWidth = width;
  //   itsBottom = bottom;
    // itsRight = right;

    itsUpperLeft.Setlength(width);
    itsUpperLeft.Setwidth(length);

    itsUpperRight.Setlength(right);
    itsUpperRight.Setwidth(length);

    itsLowerLeft.Setlength(width);
    itsLowerLeft.Setwidth(bottom);

    itsLowerRight.Setlength(right);
    itsLowerRight.Setwidth(bottom);
     }


 // compute area of the rectangle by finding sides,
 // establish width and height and then multiply



#endif //COMLAB_TASKS_RECTANGLE_H