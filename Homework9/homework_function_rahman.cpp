/**
 * Md afnan rahman
 * Homework 9 – Arrays Application
 */

#include<iostream>
#include<ctime>
using namespace std;

int arraysize(){
    int size;
    do{
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;
    }while(size < 1 || size > 100);
    return size;
}


void randPopulate(int a[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        a[i] = rand()%21 + 10;
    }
}

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

void reverse(int a[], int size){
    int start = 0;
    int end = size - 1;
    int temp;

    while(start < end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}