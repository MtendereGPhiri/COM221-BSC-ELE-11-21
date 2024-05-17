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


class Rectangle
        {
public:
            Rectangle();
            void SetLength();
            void SetWidth();
            void GetLength();
            void GetWidth();

    Rectangle(float length, float width, float bottom, float right);

    ~Rectangle() {}


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