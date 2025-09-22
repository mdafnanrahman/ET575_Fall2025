/*
Md afnan rahman
sep 21, 2025
Lab 7
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    int num1, num2;
    string op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Choose an operation (+, -, *, /, %, q to quit): ";
    cin >> op;

    switch (op[0]) {
        case '+':
            cout <<"Result: "<< num1<<"+"<< num2<< " = "<< num1 + num2 <<endl;
            break;
        case '-':
            cout << "Result: " <<num1 << " - " << num2 << " = "<< num1 - num2 <<endl;
            break;
        case '*':
            cout <<"Result: "<< num1<< " * "<< num2<< " = " <<num1 * num2 <<endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 /num2 <<endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        case '%':
            if (num2 != 0)
                cout << "Result: "<< num1 << " % " << num2<<" = "<< num1%num2 <<endl;
            else
                cout << "Error: Modulus by zero is not allowed." <<endl;
            break;
        case 'q':
        case 'Q':
            cout << "Program quit."<< endl;
            break;
        default:
            cout <<"Error: Invalid operation."<<endl;
    }
    return 0;
}