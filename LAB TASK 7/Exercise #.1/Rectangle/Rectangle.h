// Begin Rectangle.h
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



    Sides GetUpperLeft() const {
        return itsUpperLeft;
    }

    Sides GetLowerLeft() const {
        return itsLowerLeft;
    }

    Sides GetUpperRight() const {
        return itsUpperRight;
    }

    Sides GetLowerRight() const {
        return itsLowerRight;
    }

    void SetUpperLeft(Sides Location) {
        itsUpperLeft = Location;
    }

    void SetLowerLeft(Sides Location) {
        itsLowerLeft = Location;
    }

    void SetUpperRight(Sides Location) {
        itsUpperRight = Location;
    }

    void SetLowerRight(Sides Location) {
        itsLowerRight = Location;
    }

    void Setlength(float lenth) {
        itslength = lenth;
    }

    void SetLeft(int left) {
        itsWidth = left;
    }


    int GetArea() const;

private:
    Sides itsUpperLeft{};
    Sides itsUpperRight{};
    Sides itsLowerLeft{};
    Sides itsLowerRight{};
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