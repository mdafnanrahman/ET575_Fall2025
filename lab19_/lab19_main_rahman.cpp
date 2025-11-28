/**
 * Md afnan rahman
 * Nov 24, 2025
 * lab 19, files and console input
 */

#include<iostream>

#include "lab19_function_rahman.cpp"

 using namespace std;

 int main(){
    cout<<"\n------ Example 1: console input failure ------"<<endl;
    checknumber();
    cout<<"\n------ Example 2: console input failure in loop ------"<<endl;
    cout<<validatenumber()<<endl;
    cout<<"\n------ Example 3: reading a file ------"<<endl;
    readfiles("samplefile.txt");
    cout<<"\n------ Example 4: writting content into a file ------"<<endl;
    writefile("outputfile.txt");
    cout<<"\n------ Example 5: append data into a file ------"<<endl;
    appendfile("samplefile.txt");
    cout<<"\n------ Create data_user.txt ------"<<endl;
    createdatafile();
    cout<<"\n------ Append message ------"<<endl;
    appendmessage("Hello, this is my new line.");
    cout<<"\n------ Read file ------"<<endl;
    readdata("data_user.txt");
    return 0;
 }