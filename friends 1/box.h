#pragma once
using namespace std;
class Box
{
    private:
        unsigned int length;
        unsigned int width;
        unsigned int height;

    public:
        Box(int, int, int);
        friend unsigned int CountVolume(Box );

};

// ---------------------------------------------------------------------------------------------
class Line;

class Point
{
    private:
        int x;
        int y;

    public:
        Point(int, int);
        Point();
        friend Line;
};

class Line
{
    private:
        Point start;
        Point end;

    public:
        Line(int, int, int, int);
        Line(Point&, Point&);
        void Print();

};

// ------------------------------------------------------------------------------------------

class Complex
{
    private:
        int real;
        int imagine;

    public:
        Complex(int, int);
        void Print();
        // Complex operator+(Complex& other);
        friend Complex operator+(Complex&, Complex&);
};