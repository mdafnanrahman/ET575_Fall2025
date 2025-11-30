/**
 * Md afnan rahman
 * Homework 10 – File processing
 */

#include<iostream>
#include "homework_function_rahman.cpp"
using namespace std;

int main(){
    string filename = "Remembering_Earth.txt";
    cout<<"\n------ Display File ------"<<endl;
    displayfile(filename);
    countwords(filename);
    countEarth(filename);
    return 0;
}