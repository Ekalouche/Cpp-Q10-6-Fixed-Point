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
    


} 


Q10p6 Q10p6::operator-(const Q10p6& rhs)
{
   

} 

Q10p6 Q10p6::operator*(const Q10p6& rhs)
{

} 


Q10p6 Q10p6::operator/(const Q10p6& rhs)
{
   

} 
j

bool Q10p6::operator==(const Q10p6& rhs)
{
    

} 