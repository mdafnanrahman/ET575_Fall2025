/*
    Md afnan rahman
    lab 17, 2d array
    Nov 19, 2025
*/
#include<iostream>

#include "lab17_function_rahman.cpp"

using namespace std;

int main(){

    cout<<"\n ---- example 1: array declaration ---- "<<endl;
    array_dec();

    cout<<"\n ---- example 2: print each value in 2D array ---- "<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS]={
        {5, 10},
        {-2, -9},
        {6}
    };

    print2d(ar,3);

        cout<<"\n ---- example 3: populate ab array with numbers ---- "<<endl;
        // declare a 2D array
        int arr_num[2][3];

        //call the function
        populate_array(arr_num, 2, 3);
        print_array(arr_num, 2, 3);

        cout<<"\n ---- example 4: sum of all numbers ---- "<<endl;
        int s = sum_all(arr_num, 2, 3);
        cout<<"The total sum "<<s<<endl;

        cout<<"\n ---- example 5: ODD NUMBERS IN A 2d ARRAY ---- "<<endl;
        int c = total_odd(arr_num,2,3);
        cout<<"Total odd numbers ="<<c<<endl;


    cout<<"\n ---- EXERCISE ---- "<<endl;
        
    char again = 'y';
    while(again=='y' || again=='Y'){

    int arr[3][4];
    cout << "\n ------ // ------- // ------- // ------\n" << endl;
    populate_array(arr, 3, 4);
    print_array(arr, 3, 4);

    double avg = average(arr, 3, 4);
    cout<<"Average = "<<avg<<endl;
    cout<<"\nAnother run? (y/n): ";
    cin>>again;
    cout<<endl;
}

    return 0;
}