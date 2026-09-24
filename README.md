# Q10.6 Fixed-Point Number Class

A C++ implementation of a Q10.6 fixed-point numeric type. The class stores values with six fractional bits and provides constructors, conversions, and arithmetic behavior while following the lab constraint of using multiplication and division by 64 instead of bit shifting.

## Highlights

- Converts integer, float, and double inputs into Q10.6 representation
- Converts stored fixed-point values back to integer and floating-point forms
- Encapsulates representation and operations in a reusable class
- Separates the class interface, implementation, and test program
- Prints actual and expected results for straightforward verification

## Key Files

| File | Purpose |
| --- | --- |
| `Q_Format_Numbers/Module.h` | Q10.6 class declaration |
| `Q_Format_Numbers/Module.cpp` | Constructors, conversions, and operations |
| `Q_Format_Numbers/Q_Format_Numbers.cpp` | Demonstration and test cases |
| `Q_Format_Numbers/Q_Format_Numbers.sln` | Visual Studio solution |

## Skills Demonstrated

C++, object-oriented design, constructors, operator behavior, fixed-point arithmetic, modular source organization, and manual testing.
