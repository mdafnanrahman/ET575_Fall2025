/*
Md afnan rahman
Homework 6, functions and introduction to pointers and reference
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;


int rand_side() {
    int side = rand() % 20 + 1;
    return side;
}


double hyp(int side1, int side2) {
    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    return hypotenuse;
}


void print_result(int side1, int side2, double hypotenuse) {
    cout << fixed << setprecision(2);
    cout << "The hypotenuse of a right angle with side "<<side1<<" and "<<side2<< " is = "<< hypotenuse<< endl;
}