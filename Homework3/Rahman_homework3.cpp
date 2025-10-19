#include <iostream>
using namespace std;

int main() {

/*
Md afnan rahman
Homework 3 - for loop
*/
    int num = 0;
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;

    for (int i = 1; i <= 10; i++){
        cout<<"Enter number "<<i<<": ";
        cin>>num;
        if (num > 0){
            count_positive++;
        }
        else if (num < 0){
            count_negative++;
        }
        else{
            count_zero++;
        }
    }
    cout<<"Total positive numbers = "<<count_positive<<endl;
    cout<<"Total negative numbers = "<<count_negative<<endl;
    cout<<"Total zeros = "<<count_zero<<endl;



    int num_days = 0;
    double sales = 0.0;
    double total_sales = 0.0;
    double average_sales = 0.0;
    cout<<"Enter the number of sales days: ";
    cin>>num_days;
    for (int i = 1; i <= num_days; i++){
        cout<<"Enter sales for day "<<i<<": $";
        cin>>sales;
        total_sales += sales;
    }
    average_sales = total_sales / num_days;
    cout<<"Total sales $"<<total_sales<<" for "<<num_days<<" days.  Average daily sales $"<<average_sales<<endl;

    return 0;
}