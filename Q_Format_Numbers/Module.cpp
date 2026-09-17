#include "module.h"

using namespace std;

Q10p6::Q10p6(int TheValue)
{
    // Convert integer value to Q10p6 format
    Value = (int16_t)(TheValue << 6);

} // integer constructor


Q10p6::Q10p6(float TheValue)
{
    // Convert floating-point value to Q10p6 format
    Value = (int16_t)(TheValue * (float)(1 << 6));

} // float constructor


Q10p6::Q10p6(double TheValue)
{
    // Convert double-precision value to Q10p6 format
    Value = (int16_t)(TheValue * (double)(1 << 6));

} // double constructor


int Q10p6::ToInt()
{
    // Convert Q10p6 value back to integer
    return Value / (1 << 6);

} // ToInt()


float Q10p6::ToFloat()
{
    // Convert Q10p6 value back to floating-point
    return (float)Value / (float)(1 << 6);

} // ToFloat()


Q10p6 Q10p6::operator+(const Q10p6& rhs)
{
    Q10p6 RetVal;

    // Add the Q10p6 values
    RetVal.Value = Value + rhs.Value;

    return RetVal;

} // Q10p6/Q10p6 Addition


Q10p6 Q10p6::operator-(const Q10p6& rhs)
{
    Q10p6 RetVal;

    // Subtract the Q10p6 values
    RetVal.Value = Value - rhs.Value;

    return RetVal;

} // Q10p6/Q10p6 Subtraction


Q10p6 Q10p6::operator*(const Q10p6& rhs)
{
    Q10p6 RetVal;
    int32_t Temp;

    // Multiply using a 32-bit intermediate value
    Temp = (int32_t)Value * (int32_t)rhs.Value;

    // Shift right 6 bits to return to Q10p6 format
    RetVal.Value = (int16_t)(Temp >> 6);

    return RetVal;

} // Q10p6/Q10p6 Multiplication


Q10p6 Q10p6::operator/(const Q10p6& rhs)
{
    Q10p6 RetVal;
    int32_t Temp;

    // Shift left 6 bits before integer division
    Temp = ((int32_t)Value << 6);

    RetVal.Value = (int16_t)(Temp / rhs.Value);

    return RetVal;

} // Q10p6/Q10p6 Division


bool Q10p6::operator==(const Q10p6& rhs)
{
    // Compare the stored Q10p6 values
    return (Value == rhs.Value);

} // Q10p6/Q10p6 Equality