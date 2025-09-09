/*
Md afnan rahman
Lab 3, strings and string methods
sep 8,2025
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<"\n------example 1: string indexing ------"<<endl;
    string first_name = "Peter";
    cout<<"The 3rd character = "<<first_name[2]<<endl;
    cout<<"The 1st character = "<<first_name.at(0)<<endl;

    cout<<"\n------example 2: amount of character in a string ------"<<endl;
    int character = first_name.length();
    cout<<"there is "<<character<<" character/s in "<<first_name<<endl;

    cout<<"\n------example 3: concatenate character/s in a string ------"<<endl;
    string last_name = "Pan";
    string username = "pp123";
    cout<<"concatenated word = "<<first_name + last_name + username<<endl;

    cout<<"\n------example 4: subtracting characters in a string ------"<<endl;
    string msg = "Today is a beautiful day!";
    // extract 5 characters from the 3rd character
    string subst_char = msg.substr(2, 5);
    cout<<"Extracted character = "<<subst_char<<endl;

    cout<<"\n------example 5: inserting characters in a string ------"<<endl;
    // insert the word "maybe"
    msg.insert(5, " maybe");
    cout<<"After insert method = "<<msg<<endl;

    cout<<"\n------example 6: inserting characters to the end of a string ------"<<endl;
    msg.append(" -- by prof. Wu");
    cout<<" After append method = "<<msg<<endl;

    cout<<"\n------example 7: inserting characters to the end of a string ------"<<endl;
    msg.replace(17,9,"bad");
    cout<<"After replace method = "<<msg<<endl;

    cout<<"\n------example 8: reasing characters from a string ------"<<endl;
    // erase the word 'today'
    msg.erase(0,5);
    cout<<"After erase method = "<<msg<<endl;

    cout<<"\n------example 9: find characters in a string ------"<<endl;
    // find method returns the index number of the first found
    // if the character was not found, it returns -1
    //find the the word 'prof'
    int index_prof = msg.find("prof");
    cout<<"the index of prof = "<<index_prof<<endl;

    cout<<"\n------ EXERCISE ------"<<endl;
    string word ="";
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"2nd character: "<<word[1]<<endl;

    int length = word.length();
    cout<<"word has: "<<length<<" characters "<<endl;

    string replac = word;
    replac.replace(2,2,"-- $ --");
    cout<<"Replace word: "<<replac<<endl;

    string removed = word;
    removed.erase(1,4);
    cout<<"Remove end characters: "<<removed<<endl;



    return 0;
}