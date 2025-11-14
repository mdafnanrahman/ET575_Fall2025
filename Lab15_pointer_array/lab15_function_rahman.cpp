/*
Md afnan rahman
Nov 12 , 2025
lab 14: introduction to arry, points and referances
*/
#include<iostream>
using namespace std;

void pointer_ref(){
    int num = 12;
    char c = 'T';
    string n = "Peter";

    // declear the pointer 
    int* pointerint;
    char* pointerchar;
    string* pointerstring;

    //testing memory address
    cout<<"memory address of int "<<pointerint<<endl;

    // pointer with value . Value is the memory of the pointer
    pointerint=&num;
    pointerchar = &c;
    pointerstring = &n;

    //check reference value of each pointer
    cout<<"Reference value int = "<<pointerint<<endl;
    cout<<"Reference value char = "<<pointerchar<<endl;
    cout<<"Reference value string = "<<pointerstring<<endl;

    //difference operator
    cout<<"different value of int = "<<pointerint<<endl;
    cout<<"different value of char = "<<pointerchar<<endl;
    cout<<"different value of string = "<<pointerstring<<endl;
}

//Example 2
//function that passes a value
void printvalue(string v){
    cout<<"Value = "<<v<<endl;
}

// function that passes a reference

void printbyreference(string& v){
    cout<<"Passed by reference = \t"<<v<<endl;
}

//function that passes a memory address
void printaddress(string*v){
    cout<<"Pass memory address = \t"<<v<<endl;
}

//example 3; arrays

void arrays(){
    //declare an array with five values
    int scores[5];

    // assingning/accessing indivisual cells in an array
    scores[0] = 60; //first value has index 0
    scores[1] = 30;
    scores[2] = 75;
    scores[3] = 79;
    scores[4] = 98;

    cout<<"Array = \t"<<scores<<endl;
    cout<<"The third score is "<<scores[2]<<endl;

    //initializing calue to an arrray
    int age_children[3]= {12,8,5};
    cout<<"The 1st age = "<<age_children[0]<<endl;

    // when a array is declared with an initial value, the size of the array can be ommited
    string names[]={"Annie","Peter","Carl","Brian"};
    cout<<"The fourth name is "<<names[3]<<endl;
}

void sizeofarrays(){
    cout<<"Size of char /t"<<sizeof(char)<<endl;
    cout<<"Size of int /t"<<sizeof(int)<<endl;
    cout<<"Size of double /t"<<sizeof(double)<<endl;
    cout<<"Size of string /t"<<sizeof(string)<<endl;

    int age_children[] = {2,8,5,7};
    cout<<"Size of age_children \t"<<sizeof(age_children)<<endl;
}

//example 5: loop in a array
void looparray(){
    string names[]={"Annie","Peter","Carl","Brian"};
    int sizenames = sizeof(names)/sizeof(names[0]);
    int counter = 0;
    for(int i =0; i<sizenames; i++){
        cout<<names[i]<<"\t";
        //cout how many name has 5+ characters
        if (names[i] .length () >= 5){
            counter++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter<<" names with 5+ characters! "<<endl;
}

//EXERCISE

void exercise(){
    // declare an array with 5 length
    int scores[5];

    // assigning/accessing individual cells in an array
    scores[0] = 60; // first valuse has index 0
    scores[1] = 90;
    scores[2] = 75;
    scores[3] = 88;
    scores[4] = 100;

    // set maximum score
    int maxscore = scores[0];
    for(int i = 1; i < 5; i++){
        if(scores[i] > maxscore){
            maxscore = scores[i];
        }
    }
    cout<<endl;
    cout << "The maximum score is " << maxscore << endl;
}