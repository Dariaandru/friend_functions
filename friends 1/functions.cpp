#include "box.h"
#include <iostream>
using namespace std;

unsigned int CountVolume(Box object)
{
    unsigned int res = object.width * object.height * object.length;
    return res;
}

Box::Box(int length, int width, int height)
{
    if(length < 0 || height < 0 || width < 0)
    { 
        throw "Enter number > 0";
    }
        

    this->width = width;
    this->height = height;
    this->length = length;
}

// -----------------------------------------------------------------------------------------------------

Point::Point()
{
    this->x = 0;
    this->y = 0;
}

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

Line::Line(int x0, int y0, int x1, int y1)
{
    this->start.x = x0;
    this->start.y = y0;
    this->end.x = x1;
    this->end.y = y1;

}

Line::Line(Point& p1, Point& p2)
{
    this->start.x = p1.x;
    this->start.y = p1.y;
    this->end.x = p2.x;
    this->end.y = p2.y;
}

void Line::Print()
{
    cout << "start point (x; y) = (" << this->start.x << "; " << this->start.y << ")" << endl;
    cout << "end point (x; y) = (" << this->end.x << "; " << this->end.y << ")" << endl << endl;
}

// -----------------------------------------------------------------------------------------------

Complex::Complex(int a, int b)
{
    this->real = a;
    this->imagine = b;
}

void Complex::Print()
{
    if (this->imagine > 0)
    {
        cout << this->real << "+" << this->imagine << "i" << endl;
    }
    else if (this->imagine != 0)
    {
        cout << this->real << this->imagine << "i" << endl;
    }
    else
    {
        cout << this->real << endl;
    }

}


// Complex Complex::operator+(Complex& other)
// {
//     Complex res(this->real+other.real, this->imagine+other.imagine);
//     return res;
// }


Complex operator+(Complex& x1, Complex& x2)
{
    Complex res(x1.real+x2.real, x1.imagine+x2.imagine);
    return res;
}
