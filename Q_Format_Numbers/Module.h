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