#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() {
    itslength =0.0f;
    itsWidth =0.0f;
}

Rectangle::Rectangle(float length, float width, float bottom, float right) {
    itslength = length;
    itsWidth = width;

}
float GetLength() const {
    return itslength;
}

float GetWidth() const {
    return itsWidth;
}

void Setlength(float lenth) {
    itslength = lenth;
}

void SetLeft(int left) {
    itsWidth = left;
}


int GetArea() const;
