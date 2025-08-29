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

    string country;
    char gender;
    int zipcode;
    double rate;

    cout << "Enter a country: ";
    cin >> country;
    cout << "Enter a gender (f for female, m for male, o for others): ";
    cin >> gender;
    cout << "Enter a zip code: ";
    cin >> zipcode;
    cout << "Enter a tax rate: ";
    cin >> rate;

    cout << "\nEntered country:" << country << endl;
    cout << "Selected gender:" << gender << endl;
    cout << "Zip code:" << zipcode << endl;
    cout << "Tax rate:" << rate << endl;
    return 0;
}
