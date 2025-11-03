/*
Md Afnan Rahman
Homework5
Nov 2, 2025
*/

#include <iostream>
#include "Program1_function_rahman.cpp"
using namespace std;

int main() {
    cout << "\n------ Program 1: Wind chill calculation ------" << endl;

    int s = speed();
    float t = temp();

    prompt_result(windspeed(s, t));

    cout << "\n------ Program 2: Descending order entries ------" << endl;

    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();

    bool desc_order = inOrder(num1, num2, num3);

    order_result(num1, num2, num3, desc_order);

    return 0;
}