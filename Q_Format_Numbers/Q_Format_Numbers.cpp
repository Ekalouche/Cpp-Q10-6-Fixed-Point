#include <iostream>
#include "module.h"

using namespace std;

int main(void)
{
    // Test constructors and conversions.
    Q10p6 A(6);       // Integer constructor
    Q10p6 B(2.5f);    // Float constructor
    Q10p6 C(-3.75);   // Double constructor
    Q10p6 D;         // Integer constructor with default argument 0

    cout << "Constructor and conversion tests" << endl;

    cout << "A.ToInt(): " << A.ToInt()
        << "  Expected: 6" << endl;
    cout << "A.ToFloat(): " << A.ToFloat()
        << "  Expected: 6" << endl;

    cout << "B.ToInt(): " << B.ToInt()
        << "  Expected: 2" << endl;
    cout << "B.ToFloat(): " << B.ToFloat()
        << "  Expected: 2.5" << endl;

    cout << "C.ToInt(): " << C.ToInt()
        << "  Expected: -3" << endl;
    cout << "C.ToFloat(): " << C.ToFloat()
        << "  Expected: -3.75" << endl;

    cout << "D.ToFloat(): " << D.ToFloat()
        << "  Expected: 0" << endl;


    // Test arithmetic operators.
    Q10p6 X(3.0);
    Q10p6 Y(1.5);
    Q10p6 Result;

    cout << endl << "Arithmetic tests: X = 3, Y = 1.5" << endl;

    Result = X + Y;
    cout << "X + Y: " << Result.ToFloat()
        << "  Expected: 4.5" << endl;

    Result = X - Y;
    cout << "X - Y: " << Result.ToFloat()
        << "  Expected: 1.5" << endl;

    Result = X * Y;
    cout << "X * Y: " << Result.ToFloat()
        << "  Expected: 4.5" << endl;

    Result = X / Y;
    cout << "X / Y: " << Result.ToFloat()
        << "  Expected: 2" << endl;

    Result = Y / X;
    cout << "Y / X: " << Result.ToFloat()
        << "  Expected: 0.5" << endl;


    // Test equality.
    Q10p6 SameAsX(3);
    bool AreEqual;

    cout << endl << "Equality tests" << endl;

    // Compare matching values and save the Boolean result.
    AreEqual = (X == SameAsX);

    cout << "X == SameAsX: ";
    if (AreEqual)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    cout << "  Expected: true" << endl;

    // Compare different values and save the Boolean result.
    AreEqual = (X == Y);

    cout << "X == Y: ";
    if (AreEqual)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    cout << "  Expected: false" << endl;



    return 0;
}