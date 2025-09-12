/*
Md afnan rahman
Lab 4, control flow
sep 10,2025
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n ------ Example 1: bool variable ------ "<<endl;
    // check if a number is positive
    // step 1> declear and collect a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // step 2> check if the number is positive
    bool checkpositive = n>=0;
    // step 3> print the result
    cout<<"Is "<<n<<" positive? "<<checkpositive<<endl;

    cout<<"\n ------ Example 3: If statement ------ "<<endl;
    // change the checking_code if a number is positive
    int checking_code = 111;
    if(n>=0){
        checking_code = 999;
    }
    cout<<"checking code = "<<checking_code<<endl;

    cout<<"\n ------ Example 3: if-else statement ------ "<<endl;
    // check if a number is even or odd
    if(n%2 == 0){
        cout<<n<<" is EVEN"<<endl;
    }
    else{
        cout<<n<<"is ODD"<<endl;
    }

    cout<<"\n ------ Example 4: if-else statement ------ "<<endl;
    // absolute value
    if(n>=0){
        cout<<n<<" is positive"<<endl;
    }
    else{
        cout<<n<<" is negative"<<endl;
        n*=-1;
        cout<<"The absolute value is "<<n<<endl;
    }

    cout<<"\n ------ Example 5: Multiway statement ------ "<<endl;
    // select the color according to a wavelenght
    int wavelength =0;
    string emitted_colore ="";
    cout<< "Enter a wavelength: ";
    cin>>wavelength;
    // ciltiway conditional statement
    if( 0<=wavelength && wavelength<=379)
    emitted_colore = "ultraviolet";
    else if ( 380<=wavelength && wavelength<=520)
    emitted_colore = "blue";
    else if ( 521<=wavelength && wavelength<=590)
    emitted_colore = "green";
    else if ( 591<=wavelength && wavelength<=740)
    emitted_colore = "red";
    else if (wavelength>=520)
    emitted_colore = "infrared";
    else
    emitted_colore = "unable to read";

    //print result
    cout<<"The emitted color of wavelength "<<wavelength<<" is "<<emitted_colore<<endl;

    cout<<"\n ------ EXERCISE ------ "<<endl;
    // declear variables
    string gpa ="";
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;
    cout<<"Enter labs score: ";
    cin>>labs;
    cout<<"Enter final_exam score: ";
    cin>>final_exam;
    cout<<"Enter homework score: ";
    cin>>homework;

    grade = final_exam *0.5 + labs*0.3 + homework*0.2;
        
    if(grade <=100 && grade >=90)
        gpa="A";
    else if(grade >=80)
        gpa="B";
    else if(grade >=70)
        gpa="C";
    else if(grade >=60)
        gpa="D";
    else if(grade >=0)
        gpa="F";
    else
        gpa="";

    cout<<"A final grade of "<<grade<<" is equivalent to a GPA of "<<gpa<<endl;

    return 0;
}