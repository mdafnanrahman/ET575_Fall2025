/*
Md afnan rahman
Aug 27, 2025
Lab 1, iostream
*/
#include <iostream>
using namespace std;

int main() 
{
    cout << "------ Example 1: cout data ------"<<endl;
    cout<<"that is a C++ code"<<endl;
    // varable = temporary storage of data
    // declare the varable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;
    
    cout << "------ Example 2: cin data ------"<<endl;
    cout <<"Enter a new username"<<endl;
    cin >> username;
    cout<<"new user is "<<username<<endl;

    cout << "------ Example 3: data type ------"<<endl;
    //declare varlable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout<<"Given symbol ="<<sym<<endl;
    cout<<"Given distance ="<<distance<<endl;
    cout<<"Given number ="<<number<<endl;

    cout << "------ Exercise ------"<<endl;

    return 0;
}
