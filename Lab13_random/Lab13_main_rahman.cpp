/*
Md afnan rahman
Lab 13 random varibles
oct 27, 2025
*/
#include<iostream>
#include "Lab13_function_rahman.cpp";
using namespace std;
#include<time.h>

int main(){
    srand(time(0));

    cout<<"------ Example 1 random number ------"<<endl;
    int r =random_number();
    cout<<"Random number = "<<r<<endl;

    cout<<"------ Example 2 different random number ------"<<endl;
    int diff_random = different_random();
    cout<<"Different random number: "<<diff_random<<endl;

    cout<<"------ Example 3 random number between 0 and 9------"<<endl;
    int r_0_9 = random_0_9();
    cout<<"Number between 0 and 9: \t"<<r_0_9<<endl;

    cout<<"------ Example 4 random number between -10 and 5------"<<endl;
    cout<<"Number between -10 and 5 \t"<<random_neg10_5()<<endl;

    cout<<"------EXERCISE ------"<<endl;
    int run1 = random_1_6();
    int run2 = random_1_6();

    // call function ti ccheck for snake_eyes
    bool result = compare_ones(run1,run2);

    //call function to print result
    
    printresult(result);
    return 0;
}