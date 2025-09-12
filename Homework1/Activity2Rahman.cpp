/*
Homework 1: strings, string methods, and numerical variables
Student's Name:MD Afnan Rhaman
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    float PI = 3.14159;

    float radius = 0.0;
    float height = 0.0;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter height: ";
    cin>>height;

    bool isGreater = radius > height;

    bool isEqual = radius == height;

    height *= 3;
    radius += 5;

    bool notEqualAndGreater =(radius!=height)&&(radius>height);

    float volume = PI * radius * radius * height;

    cout<<"\n------------------------------ RESULT ACTIVITY 2 ----------------------------\n"<<endl;
    cout<<"Step 3) Is the radius greater than height?\t"<<isGreater<<endl;
    cout<<"Step 4) Is the radius equal to height?\t"<<isEqual<<endl;
    cout<<"Step 5) Triple height =\t"<<height<<"cm"<<endl;
    cout<<"Step 5) Increased radius by 5 =\t"<<radius<<"cm"<<endl;
    cout<<"Step 6) Is the radius not equal to and greater than height?\t"<<notEqualAndGreater<<endl;
    cout<<"Step 7) The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is = "<<volume<<"cm^3"<<endl;

    return 0;
}