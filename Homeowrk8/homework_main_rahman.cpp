/*
    Md afnan rahman
    Homework8, 2d array
    Nov 20, 2025
*/

#include<iostream>
#include "homework_function_rahman.cpp"

using namespace std;
const int ROWCOL_ARRAY = 4;
int main(){
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int search;
    cout<<"Enter a number to search: ";
    cin>>search;
    int result[2];
    search_value(ar, ROWCOL_ARRAY, ROWCOL_ARRAY, search, result);
    display_message(search, result);

    return 0;
}