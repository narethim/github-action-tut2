//============================================================================
// Name        : basic_math.cpp
// Author      : Example
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "CBasicMath.h"
#include "CBasicMathFloat.h"

#include <iostream>
using namespace std;

void run_basic_math() {
    CBasicMath basicMath;
    int x = 4;
    int y = 5;

    int z1 = basicMath.Addition(x, y);
    printf("\nAddition Result: %d\n", z1);

    int z2 = basicMath.Multiply(x, y);
    printf("\nMultiply Result: %d\n", z2);

}

void run_basic_math2() {
    CBasicMathFloat basicMathFloat;
    float x = 4.0;
    float y = 5.0;

    float z1 = basicMathFloat.Addition(x, y);
    printf("\nAddition Result: %f\n", z1);

    float z2 = basicMathFloat.Multiply(x, y);
    printf("\nMultiply Result: %f\n", z2);

    float z3 = basicMathFloat.Substraction(x, y);
    printf("\nSubstraction Result: %f\n", z3);

    float z4 = basicMathFloat.Divide(x, y);
    printf("\nDivide Result: %f\n", z4);

}

int main() {

    run_basic_math();
    run_basic_math2();
  
    return 0;
}
