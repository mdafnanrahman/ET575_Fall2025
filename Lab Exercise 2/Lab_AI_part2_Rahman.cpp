#include <iostream>
using namespace std;

int main() {
    //double celsius, fahrenheit;

    //cout << "Enter temperature in Celsius: ";
    //cin >> celsius;

    //fahrenheit = (celsius * 9 / 5) + 32;

    //cout << celsius<<"C " << "is " << fahrenheit << "F"<< endl;

double celsius, fahrenheit;
int choice;

cout << "Choose conversion type:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (1.8 * celsius) + 32;
        cout << celsius << "°C" << " is "<< fahrenheit << "°F " << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        cout << fahrenheit << "°F" << " is "<< celsius << "°C " << endl;
    }
    else {
        cout << "Invalid choice. Please run the program again and enter 1 or 2." << endl;
    }

    return 0;
}

// 1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
//no it dosent, i used chatgpt and the code was simple, i lernet the code in class.

// 2. Are there any issues or improvements you noticed? Explain.
// there was not issue but the i chnaged some of the text to make it look like how it was in the Example Output

// 3. What test cases did you try, and why? Explain.
//i tested both faharenheit and celsius to see of both works and it did also i tetsted the one on example output and i got the same answer

