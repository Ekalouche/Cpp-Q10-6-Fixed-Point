/*
    Q10p6 Class

    The Q10p6 class is used to store and work with fixed-point
    Q10p6 numbers. The value is stored internally as a 16-bit
    integer scaled by 64.

    The class can:
    - Create Q10p6 values from int, float, and double values
    - Convert Q10p6 values back to int or float
    - Add, subtract, multiply, and divide Q10p6 values
    - Compare two Q10p6 values for equality

    Example:

    // Test constructors and conversions.
    Q10p6 A(6);       // Integer constructor
    Q10p6 B(2.5f);    // Float constructor
    Q10p6 C(-3.75);   // Double constructor
    Q10p6 D;          // Integer constructor with default argument 0

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
*/

#ifndef MODULE_H
#define MODULE_H

#include <cstdint>

using namespace std;

class Q10p6
{
private:
    int16_t Value;

public:
    // Constructors
    Q10p6(int TheValue = 0);
    Q10p6(float TheValue);
    Q10p6(double TheValue);

    // Conversion methods
    int ToInt();
    float ToFloat();

    // Operator methods
    Q10p6 operator+(Q10p6&);
    Q10p6 operator-(Q10p6&);
    Q10p6 operator*(Q10p6&);
    Q10p6 operator/(Q10p6&);

    bool operator==(Q10p6&);

}; // end of class declaration

#endif