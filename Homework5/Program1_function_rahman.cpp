/*
Md Afnan Rahman
Homework5
Nov 2, 2025
*/

#include <iostream>
#include <cmath>
using namespace std;

int speed() {
    int v;
    do {
        cout << "Enter wind speed (positive number less than 100): ";
        cin >> v;
        if (v <= 0 || v >= 100) {
            cout << "Invalid input! Try again.\n";
        }
    } while (v <= 0 || v >= 100);
    return v;
}


float temp() {
    float t;
    do {
        cout << "Enter temperature in Celsius (must be <= 10 and > -90): ";
        cin >> t;
        if (t > 10 || t <= -90) {
            cout << "Invalid input! Try again.\n";
        }
    } while (t > 10 || t <= -90);
    return t;
}


float windspeed(int v, float tem) {
    float chill = 33-((10*sqrt(v)-v+10.5)*(33-tem));
    return chill;
}


void prompt_result(float chillIndex) {
    cout << "The wind chill index is: " << chillIndex << endl;
}





int collectNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

bool inOrder(int n1, int n2, int n3) {
    if (n1 > n2 && n2 > n3) {
        return true;
    } else {
        return false;
    }
}

void order_result(int n1, int n2, int n3, bool desc) {
    cout << "\nYou entered: "<<n1<<", "<<n2<<", "<<n3<<endl;

    if (desc)
        cout<< "The numbers are in descending order.\n";
    else
        cout<< "The numbers are NOT in descending order.\n";
    char again;
    cout << "Do you want to run the program again? (y/n): ";
    cin >> again;

    if (again == 'y' || again == 'Y') {
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();
        bool desc_order = inOrder(num1, num2, num3);
        order_result(num1, num2, num3, desc_order);
    } else {
        cout << "Program ended.\n";
    }
}