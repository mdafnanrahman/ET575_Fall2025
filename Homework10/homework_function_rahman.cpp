/**
 * Md afnan rahman
 * Homework 10 – File processing
 */

#include<iostream>
#include<fstream>
using namespace std;

ifstream fin;
ofstream fout;

void displayfile(string filename){
    fin.open(filename);
    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
}

int countwords(string filename){
    fin.open(filename);
    string word;
    int count = 0;
    while(fin >> word){
        count++;
    }
    fin.close();

    fout.open("wordcounts.txt");
    fout<<"Md afnan rahman"<<endl;
    fout<<"Total number of words: "<<count<<endl;
    fout.close();

    return count;
}

int countEarth(string filename){
    fin.open(filename);
    string word;
    int count = 0;
    while(fin >> word){
        if(word == "Earth"){
            count++;
        }
    }
    fin.close();


    fout.open("wordcounts.txt", ios::app);
    fout<<"The word ‘Earth’ appears "<<count
        <<" times in the document."<<endl;
    fout.close();

    return count;
}