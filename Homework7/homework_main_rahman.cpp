/*
    Md afnan rahman
    Homework 7 – loop in an array
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
#include "homework_function_rahman.cpp"

using namespace std;

int main(){
    srand(time(0));
    int num = collect_size();
    int a[num];

    populate_numbers(a, num);

    print_numbers(a, num);

    cout<<"Minimum number:\t"<<array_min(a, num)<<endl;
    cout<<"Average:\t"<<array_avg(a, num)<<endl;

    return 0;
}
