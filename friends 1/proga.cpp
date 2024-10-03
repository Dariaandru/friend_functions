#include "box.h"
#include <iostream>
using namespace std;

int main()
{
    try
    {
        Box box1(-1, 2, 3);
        cout << CountVolume(box1) << endl;
    }
    catch (const char* ex)
    {
        cout << ex;
    }

    // ---------------------------------------------------------------------------------------

    // Point p1(0, 0);
    // Point p2(1, 1);

    // Line l(p1, p2);

    // l.Print();

    // Point t1(11, 22);
    // Point t2(3, 8);

    // Line l2(t1, t2);

    // l2.Print();

    // --------------------------------------------------------------------------------------

    // Complex a1(-1, -10);

    // Complex a2(8, 5);

    // Complex a3 = a1+a2;

    // a3.Print();


    return 0;
}

