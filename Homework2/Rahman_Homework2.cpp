/* Homework 2: Branching 

Md Afnan Rahman 

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0 && age > 120) {
        cout << "Invalid age. Please enter a valid age." <<endl;
    }
    else if (age < 13) {
        cout << "Not eligible for any activities."<<endl;
    }
    else if (age <= 17) {
        cout << "Eligible for youth activities." <<endl;
    }
    else if (age <= 64) {
        cout << "Eligible for adult activities." <<endl;
    }
    else {
        cout << "Eligible for senior activities." <<endl;
    }




    int num1, num2, sum;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    sum = num1 + num2;

    if (sum < 0) {
        cout << "False alarm! The sum is " <<sum <<endl;
    }
    else if (sum >= 1 && sum <= 100) {
        if (sum % 5 == 0) {
            cout << sum << " is a pentagon" << endl;
        }
        else if (sum % 2 != 0) {
            cout << sum << " is an odd guess" <<endl;
        }
        else {
            cout << "The sum is " << sum << endl;
        }
    }
    else if (sum <= 200) {
        cout << "The new lucky number is " << sum << endl;
    }
    else if (sum <= 999) {
        cout << sum << " is a dreaming number" << endl;
    }
    else {
        if (sum % 2 == 0) {
            cout << sum << " approaches to the infinite evenly!" << endl;
        }
        if (sum >= 2000) {
            cout << sum << " approaches to the infinite and beyond!" << endl;
        }
    }




    string choice;
    float t, result;

    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "3. Kelvin to Celsius\n";
    cout << "4. Kelvin to Fahrenheit\n";
    cout << "5. Exit\n";
    cout << "Pick one from 1-5: ";
    cin >> choice;

    if (choice == "1") {
        cout << "Enter Celsius: ";
        cin >> t;
        result = t * 9 / 5 + 32;
        cout << t << " Celsius = " << result << " Fahrenheit\n";
    }
    else if (choice == "2") {
        cout << "Enter Fahrenheit: ";
        cin >> t;
        result = (t - 32) * 5 / 9;
        cout << t << " Fahrenheit = " << result << " Celsius\n";
    }
    else if (choice == "3") {
        cout << "Enter Kelvin: ";
        cin >> t;
        result = t - 273.15;
        cout << t << " Kelvin = " << result << " Celsius\n";
    }
    else if (choice == "4") {
        cout << "Enter Kelvin: ";
        cin >> t;
        result = (t - 273.15) * 9 / 5 + 32;
        cout << t << " Kelvin = " << result << " Fahrenheit\n";
    }
    else if (choice == "5") {
        cout << "Goodbye!\n";
    }
    else {
        cout << "Invalid choice. Please try again.\n";
    }

    return 0;
}