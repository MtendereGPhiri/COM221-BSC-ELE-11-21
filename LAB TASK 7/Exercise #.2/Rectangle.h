#pragma once
#include <iostream>

class Sides // holds x,y coordinates
{
    // no constructor, use default
public:
    void Setlength(int length) {
        itslength = length;
    }
    void Setwidth(int width){
        itswidth = width;
    }
    int Getlength() const {
        return itslength;
    }
    int Getwidth() const {
        return itswidth;
    }

private:
    int itslength;
    int itswidth;
}; // end of Sides class declaration


class Rectangle {
public:
    Rectangle(float length, float width, float bottom, float right);

    ~Rectangle() {}

    float GetLength() const {
        return itslength;
    }

    float GetWidth() const {
        return itsWidth;
    }

    void Setlength(float lenth) {
        itslength = lenth;
    }

    void SetWidth(int Width) {
        itsWidth = Width;
    }
    int GetArea() const;

private:

    int itslength;
    int itsWidth;
   // int itsBottom;
    //int itsRight;
};
int Rectangle::GetArea() const
{
    float Width = itsWidth;
    int length = itslength ;
    return (Width * length);
}
// end Rectangle.h