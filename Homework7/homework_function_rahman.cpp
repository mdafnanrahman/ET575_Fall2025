/*
    Md afnan rahman
    Homework 7 – loop in an array
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int collect_size(){
    int s;
    cout<<"Enter the size of the array: ";
    cin>>s;
    return s;
}

void populate_numbers(int ar[], int s){
    for(int i=0; i<s; i++){
        ar[i] = rand() % 99 + 1;
    }
}

void print_numbers(int ar[], int s){
    cout<<"Array values:\t";
    for(int i=0; i<s; i++){
        cout<<ar[i]<<"\t";
    }
    cout<<endl;
}

int array_min(int ar[], int s){
    int min = ar[0];
    for(int i=1; i<s; i++){
        if(ar[i] < min){
            min = ar[i];
        }
    }
    return min;
}

float array_avg(int ar[], int s){
    int total = 0;
    for(int i=0; i<s; i++){
        total += ar[i];
    }
    return (float)total / s;
}