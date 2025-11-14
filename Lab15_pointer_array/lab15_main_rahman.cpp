/*
Md afnan rahman
Nov 12 , 2025
lab 14: introduction to arry, points and referances
*/
#include<iostream>
using namespace std;
#include"lab15_function_rahman.cpp"

int main(){
    cout<<"\n------Example 1: pointers ---------"<<endl;
    pointer_ref();

    cout<<"\n------Example 2: pointers and reference in a function ---------"<<endl;
    string something = "Hello world";
    printvalue(something);
    printbyreference(something);
    printaddress(&something);

    cout<<"\n------Example 3: array ---------"<<endl;
    arrays();

    cout<<"\n------Example 4: arrays size ---------"<<endl;
    sizeofarrays();

    cout<<"\n------Example 5: loop in an array ---------"<<endl;
    looparray();

    cout<<"\n------EXERCISE ---------"<<endl;
    exercise();

    return 0;
}

