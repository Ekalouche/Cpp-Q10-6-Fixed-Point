#include <iostream>
#include "module.h"

using namespace std;

int main(void)
{
    Q10p6 A(6), B(1.5f), C(2.25), Result;

    std::cout << "Constructor / Conversion Tests" << std::endl;

    std::cout << " A from int = "
        << A.ToFloat() << std::endl;

    std::cout << " B from float = "
        << B.ToFloat() << std::endl;

    std::cout << " C from double = "
        << C.ToFloat() << std::endl;

    std::cout << " C converted to int = "
        << C.ToInt() << std::endl;


    std::cout << std::endl;
    std::cout << "Addition" << std::endl;

    Result = A + B;

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " B=" << B.ToFloat() << std::endl;
    std::cout << " A+B=" << Result.ToFloat() << std::endl;


    std::cout << std::endl;
    std::cout << "Subtraction" << std::endl;

    Result = A - B;

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " B=" << B.ToFloat() << std::endl;
    std::cout << " A-B=" << Result.ToFloat() << std::endl;


    std::cout << std::endl;
    std::cout << "Multiplication" << std::endl;

    Result = A * B;

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " B=" << B.ToFloat() << std::endl;
    std::cout << " A*B=" << Result.ToFloat() << std::endl;


    std::cout << std::endl;
    std::cout << "Division" << std::endl;

    Result = A / B;

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " B=" << B.ToFloat() << std::endl;
    std::cout << " A/B=" << Result.ToFloat() << std::endl;


    std::cout << std::endl;
    std::cout << "Comparison" << std::endl;

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " B=" << B.ToFloat() << std::endl;

    std::cout << " A==B ? = ";

    if (A == B)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;


    Q10p6 D(6);

    std::cout << " A=" << A.ToFloat() << std::endl;
    std::cout << " D=" << D.ToFloat() << std::endl;

    std::cout << " A==D ? = ";

    if (A == D)
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;


    return 0;
}