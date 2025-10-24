/*
Md afnan rahman
Lab 11, introduction to function
*/
#include<iostream>
#include "lab11_function.cpp"
using namespace std;

int main(){
    cout<<"\n ------ example 1: void function ------"<<endl;
    printhello();
    printhello();
    printhello();


    cout<<"\n ------ example 1: void function with arguments ------"<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);
    greeting("Cral");

    cout<<"\n ------ example 3: function with returning value ------"<<endl;
    int savefive=returnfive();
    cout<<"The return value is                   \t"<<savefive<<endl;
    savefive +=2 ;
    cout<<"The returning value after +=2 =       \t"<<savefive<<endl;


    cout<<"\n ------ example 4: code after the return ------"<<endl;
    printsome();
    int n = somenumber();
    cout<<"Some number          \t"<<n<<endl;


    cout<<"\n ------ example 5: calculate the area of square ------"<<endl;

    float area_square = areasquare(2.5);
    cout<<"The area of a square is          \t"<<area_square<<endl;


    cout<<"\n ------ example 6: product of two number ------"<<endl;
    int p = product(2,3);
    cout<<"the product is           \t"<<p<<endl;

    cout<<"\n ------ example 7: calculate the fahrenheit temperature ------"<<endl;
    double f = fah(12.5);
    printfah(f);

    cout<<"\n ------ example 8: chack a number ------"<<endl;
    string checknum =checknumber(-1);
    printnumber(checknum);


    cout<<"\n ------ Exercise ------"<<endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool check = isiteven(num);
    printeven(num, check);

    return 0;
}