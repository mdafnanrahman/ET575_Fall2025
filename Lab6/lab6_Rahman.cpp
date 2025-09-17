/*
Md afnan rahman
sep 15, 2025
Lab 6, nested condition statement and swich
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n ------ Example 1: nested conditional statement ------"<<endl;
    int n = 5;
    if (n>0){
        if(n%2==0){
            cout<<"The number is positive and EVEN"<<endl;
        }
        else{
            cout<<"The number is positive and ODD"<<endl;
        }
    }
    if (n<0){
        if(n%2==0){
            cout<<"The number is NEGITIVE and EVEN"<<endl;
        }
        else{
            cout<<"The number is NEGITIVE and ODD"<<endl;
        }
    }
    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n ------ Example 1: Orhanize three numbers in decreasing order ------"<<endl;
    //declare the identifiers (variavle names)
    int num1, num2, num3;

    //display a massage and collect the three numbers
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    // check if num1 is freater than num2 and num3
    if(num1>num2 && num1>num3){
        if(num2>num3)
        cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
        cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    }
    // check if num 2 is the greatest
    else if(num2>num1 && num2>num3){
        if (num1>num3)
        cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
        cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    // check if num 3 is the greatest
    else if(num3>num2 && num3>num1){
        if (num1>num2)
        cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else
        cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;
    }
    else{
        cout<<"All three numbers are the same!"<<endl;
    }

    cout<<"\n ------ Example 3: Swich ------"<<endl;
    // select a day-off using swich-case statement
    int dayoff;
    cout<<"Select a day-off: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    cin>>dayoff;

    switch (dayoff)
    {
        case 1:
        cout<<"You are off on Monday"<<endl;
        break;
        case 2:
        cout<<"You are off on Tuesday"<<endl;
        break;
        case 3:
        cout<<"You are off on Wednesday"<<endl;
        break;
        case 4:
        cout<<"You are off on Thursday"<<endl;
        break;
        case 5:
        cout<<"You are off on Friday"<<endl;
        break;
        default:
        cout<<"Unable to rwad the day-off"<<endl;
        break;
    }

    cout<<"\n ------ Example 3: Swich to select a gender ------"<<endl;
    char gender= ' ';
    cout<<"Select a gender: "<<endl;
    cout<<"m or M for male"<<endl;
    cout<<"f or F for femake"<<endl;
    cout<<"o or O for others"<<endl;
    cin>>gender;

    switch (gender)
    {
        case 'm': case 'M' :
        cout<<"Gender = MALE"<<endl;
        break;
        case 'f': case 'F' :
        cout<<"Gender = FEMALE"<<endl;
        break;
        case 'o': case 'O' :
        cout<<"Gender = OTHERS"<<endl;
        break;
        default:
        cout<< "Gender = UNDEFINED"<<endl;
        break;

    }

    cout<<"\n ------ EXERCISE 1 ------"<<endl;
    
    int saving;
    cout << "Enter the amount of money you have saved: ";
    cin >> saving;

    if (saving < 0) {
        cout << "Have some savings!" << endl;
    }
    else if (saving >= 0 && saving < 199000) {
        cout << "Keep saving!" << endl;
    }
    else if (saving >= 200000 && saving <= 500000) {
        if (saving >= 200000 && saving <= 300000)
            cout << "With $" << saving<< " you can afford an apartment or co-op with a studio." << endl;
        else if (saving > 300000 && saving <= 400000)
            cout << "With $" << saving<< " you can afford an apartment or co-op with 1 bedroom and 1 bathroom." <<endl;
        else
            cout << "With $" << saving<< " you can afford an apartment or co-op with 2 bedrooms and 1 bathroom." <<endl;
    }
    else if (saving >= 500001 && saving <= 1000000) {
        if (saving >= 500001 && saving <= 700000)
            cout << "With $" << saving<< " you can afford a house with 2 bedrooms and 2 bathrooms."<< endl;
        else
            cout << "With $" << saving<< " you can afford a house with 3 bedrooms and 3 bathrooms."<< endl;
    }
    else { 
        cout << "With $" << saving << " you can afford a mansion." << endl;
    }

    cout<<"\n ------ EXERCISE 2 ------"<<endl;

    int number;
    string answer;

    cout << "Enter a number: ";
    cin >>number;

    cout <<"Do you want to double the number? (Y/N): ";
    cin >> answer;

    switch (answer[0]) {
        case 'Y': case 'y':
        number *= 2;
        break;
        case 'N': case 'n':
        break;
        default:
        number = 0;
        break;
    }
    cout << "The number is set to " << number << endl;

    return 0;
}
