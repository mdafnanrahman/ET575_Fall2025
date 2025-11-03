/*
Md afnan rahman
Homework 6, functions and introduction to pointers and reference
*/

#include <iostream>
#include "homework6_function_rahman.cpp"
using namespace std;

int main() {
    srand(time(0)); // seed for random numbers

    int side1 = rand_side();
    int side2 = rand_side();

    double result = hyp(side1, side2);

    print_result(side1, side2, result);

    return 0;
}