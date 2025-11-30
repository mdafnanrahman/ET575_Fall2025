/**
 * Md afnan rahman
 * Homework 9 – Arrays Application
 */

#include<iostream>
#include "homework_function_rahman.cpp"
using namespace std;

int main(){

    int sizearray = arraysize();
    int noise[sizearray];
    randPopulate(noise, sizearray);
    cout<<"\nOriginal Set:"<<endl;
    print(noise, sizearray);
    reverse(noise, sizearray);
    cout<<"\nReversed Set:"<<endl;
    print(noise, sizearray);

    return 0;
}