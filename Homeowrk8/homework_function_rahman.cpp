/*
    Md afnan rahman
    Homework8, 2d array
    Nov 21, 2025
*/
#include<iostream>
using namespace std;

void search_value(int arr[][4], int rowsize, int colsize, int search, int result[]){
    bool found = false;

    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            if(arr[row][col] == search){
                result[0] = row;
                result[1] = col;
                found = true;
                return;
            }
        }
    }

    result[0] = -1;
    result[1] = -1;
}

void display_message(int search, int result[]){
    if(result[0] == -1){
        cout<<"Number "<<search<<" was not found"<<endl;
    }
    else{
        cout<<"Number "<<search<<" was found in row "
            <<result[0]<<" and column "<<result[1]<<endl;
    }
}