#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Step 1: Ask the user for a word
    cout << "Type a word: ";
    cin >> word;

    // Step 2: Print the 2nd character
    cout << "\n2nd character: " << word.at(1) << endl;

    // Step 3: Find and print the length
    cout << "word has: " << word.length() << " characters" << endl;

    // Step 4: Replace 2 characters from the 3rd character with "-- $ --"
    string replacedWord = word;  
    if (word.length() >= 3) {
        replacedWord.replace(2, 2, "--$--"); 
    }
    cout << "Replace word: " << replacedWord << endl;

    // Step 5: Remove last 3 characters
    string removedWord = word;
    if (removedWord.length() >= 3) {
        removedWord.erase(removedWord.length() - 3);
    }
    cout << "Remove end characters: " << removedWord << endl;

    return 0;
}
// --- AI Assistant Used: ChatGPT ---
/*
// Was the code correct? (Yes/No) 
yes
// Was it readable and properly commented?
yes
// Were you able to explain each line of code?
i understand most of the code, but it was little bit different
// Did it use the same programming concepts we learned in class?
no the AI code was different
// Terminal Output:
Type a word: word

2nd character: o
word has: 4 characters
Replace word: wo--$--
Remove end characters: w
*/