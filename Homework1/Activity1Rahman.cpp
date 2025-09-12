/*
Homework 1: strings, string methods, and numerical variables
Student's Name:MD Afnan Rhaman
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string line1 = "Welcome to ";
    string line2 = "New York City ";

    string name;
    cout<<"Enter your name: ";
    cin>>name;

    string message = line1 + line2 +name;

    int length = message.length();

    int index = message.find("ma");

    string replaced = message;
    if (index != -1) {
        replaced.replace(index, 2, "%---%");
    }

    cout<<"------------------------------ RESULT ACTIVITY 1 ----------------------------\n";
    cout<<"concatenated message:"<<message<<endl;
    cout<<"Message length:"<<length<<endl;
    cout<<"Index of \"ma\":"<<index<<endl;
    cout<<"Replace 'ma' with %---%:"<<replaced<<endl;

    return 0;
}

