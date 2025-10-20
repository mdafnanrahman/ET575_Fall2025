#include <iostream>
using namespace std;

int main() {

/* Md afnan rahman
Homework 4: Loops
*/

    cout<<"\n-------- Question 1 --------"<<endl;
    int num = 0;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num < 10){
            cout<<num<<" is invalid! Please enter a number greater than 10: ";
            cin>>num;
        }
    }while(num < 10);
    cout<<num<<" is a valid number!"<<endl;


    cout<<"\n-------- Question 2 --------"<<endl;
    int num1 = 0, num2 = 0;
    int min = 0, max = 0;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if (num1 < num2){
        min = num1;
        max = num2;
    }
    else{
        min = num2;
        max = num1;
    }
    cout<<"RESULT = ";
    int current = min;
    while(current <= max){
        cout<<current<<" ";
        current++;
    }
    cout<<endl;


    cout<<"\n ------ Question 3 ------"<<endl;
    int dimension = 11;
    for (int row = 1; row <= dimension; row++) {
    for (int col = 1; col <= dimension; col++) {
        if ((col >= 4 && col <= 5 && row >= 3 && row <= 10) || (col >= 6 && col <= 8 && row >= 4 && row <= 5))
            cout<<" # ";
        else
            cout<<" . ";
    }
    cout<<endl;
}

    return 0;
}