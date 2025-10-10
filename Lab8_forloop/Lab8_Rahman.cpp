/*
Md afnan rahman
Lab 8, for loop
oct 8,2025
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n------ Example 5: for loop------"<<endl;
    // print Hello five times
    for (int action=1; action<=5; action++){ // integer declared inside the for loop
        cout << "Hello "<< action <<endl;
    }
    cout<<"\n------ Example 2: for loop as a decrement counter ------"<<endl;
    // print from 9 to 1
    int n = 9;
    for (n; n>=1; n--){
        cout << n << "\t";
    }
    cout<<endl;

    cout<<"\n------ Example 3: for loop as an increment counter with different steps------"<<endl;
    // cout from 1 to 20 in a step of 3
    for (int m=1; m<=20; m=m+3){ // m = m+3 or m+=3
        cout << m << "\t";
    }
    cout << endl;

    cout<<"\n------ Example 4: for loop with conditional statement------"<<endl;
    // print all numbers between -10 and 10 that are multiples of 3
    for (int p=-10; p<=10; p++){
        //cout << p <<"\t"; // shown as a test
        //cout << endl;
        if (p%3==0 && p!=0){
            cout << p << "\t";
        }
    }
    cout << endl;
        
    cout<<"\n------ Example 5: for loop with conditional statement------"<<endl;
    // count all even numbers between 5 and 20
    int even_cout = 0;
    for(int p = 5; p<=20; p++){
        if(p%2==0 && p !=0){
            even_cout ++;
        }
    }
    // print result
    cout<<"There is/are "<<even_cout<<" even number/s"<<endl;

    cout<<"\n------ Example 6: for loop with conditional statement------"<<endl;
    // add all negative numbers between -8 and 5
    int sum_negative = 0;
    int x= -8;
    for(x ; x<=5; x++){
        if(x<0){
            sum_negative += x;
        }
    }
    // print result
    cout<<"The total sum of negative numbers = "<<sum_negative<<endl;

    cout<<"\n------ EXERCISE 1------"<<endl;

    int count_mult2 = 0;

    for (int i = 21; i >= -21; i -= 5) {
    cout << i << "\t";

    if (i % 2 == 0) {
        count_mult2++;
    }
}
cout << endl;

    cout<<"\n------ EXERCISE 2------"<<endl;
    int user_input =0;
    cout<<"Enter an intitial value: ";
    cin>>user_input;
    for (int m = user_input; m <= 30; m += 4) {  // increment by 4
    cout <<m << "\t";
}
cout << endl;

    return 0;
}