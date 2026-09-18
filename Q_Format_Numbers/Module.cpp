#include "module.h"

using namespace std;

//Constructors 

Q10p6::Q10p6(int TheValue)
{
    // Convert an integer to Q10p6 by scaling it by 64.
    Value = TheValue * 64; 
} 


Q10p6::Q10p6(float TheValue)
{
    // Convert an float to Q10p6 by scaling it by 64.
    Value = TheValue * 64.0f;
}


Q10p6::Q10p6(double TheValue)
{
    // Convert an double to Q10p6 by scaling it by 64.
    Value = TheValue * 64.0;
} 

//Convertion Code

int Q10p6::ToInt()
{
    return Value / 64;
} 


float Q10p6::ToFloat()
{
    return Value / 64.0f;
} 

//Operators Code

Q10p6 Q10p6::operator+(Q10p6& rhs)
{
    Q10p6 RetVal;

    // Add the stored values; both already use the same scale.
    RetVal.Value = Value + rhs.Value;

    return RetVal;

} 


Q10p6 Q10p6::operator-(Q10p6& rhs)
{
    Q10p6 RetVal;

    // Subtract the stored values; both use the same scale.
    RetVal.Value = Value - rhs.Value;

    return RetVal;
} 

Q10p6 Q10p6::operator*(Q10p6& rhs)
{
    Q10p6 RetVal;

    // Multiply the stored values using a 32-bit intermediate.
    int32_t Product = (int32_t)Value * rhs.Value;

    // Divide by 64 to restore the Q10p6 scale.
    RetVal.Value = Product / 64;

    return RetVal;
} 


Q10p6 Q10p6::operator/(Q10p6& rhs)
{
    Q10p6 RetVal;

    // Scale the numerator using a 32-bit intermediate.
    int32_t Numerator = (int32_t)Value * 64;

    // Divide to obtain the stored Q10p6 result.
    RetVal.Value = Numerator / rhs.Value;

    return RetVal;

} 

bool Q10p6::operator==(Q10p6& rhs)
{
    // Compare the stored Q10p6 values.
    return Value == rhs.Value;
} 