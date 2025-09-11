#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // Declare a string variable to store the user's input.
    std::string word;

    // Prompt the user to enter a word.
    std::cout << "Please type a word from the keyboard: ";
    std::cin >> word;

    // Print the 2nd character of the word.
    // Check if the word is long enough to have a 2nd character.
    if (word.length() >= 2) {
        std::cout << std::left << std::setw(23) << "2nd character:" << word[1] << std::endl;
    } else {
        std::cout << std::left << std::setw(23) << "2nd character:" << "Word is too short" << std::endl;
    }

    // Find and print the length of the word.
    std::cout << std::left << std::setw(23) << "word has:" << word.length() << " characters" << std::endl;

    // Replace 2 characters from the 3rd character with "-- $ --" and print the result.
    // Check if the word is long enough for this operation (at least 3 characters).
    if (word.length() >= 3) {
        std::string replaced_word = word; // Create a copy to avoid modifying the original 'word' variable for the next step.
        replaced_word.replace(2, 2, "-- $ --");
        std::cout << std::left << std::setw(23) << "Replace word:" << replaced_word << std::endl;
    } else {
        std::cout << std::left << std::setw(23) << "Replace word:" << "Word is too short" << std::endl;
    }

    // Remove 3 characters from the end of the word and print the result.
    // Check if the word is long enough to have 3 characters removed.
    if (word.length() >= 3) {
        std::string removed_end_word = word; // Create a copy of the original word.
        removed_end_word.erase(removed_end_word.length() - 3);
        std::cout << std::left << std::setw(23) << "Remove end characters:" << removed_end_word << std::endl;
    } else {
        std::cout << std::left << std::setw(23) << "Remove end characters:" << "Word is too short" << std::endl;
    }

    return 0;
}
// --- AI Assistant Used: Gemini ---
/*
// Was the code correct? (Yes/No) 
yes kinda,but insted of saying Type a word:, it said Please type a word from the keyboard:.
// Was it readable and properly commented? 
no
// Were you able to explain each line of code? 
no its so hard to understand
// Did it use the same programming concepts we learned in class?
no, it was so much different
// Terminal Output:
Please type a word from the keyboard: word
2nd character:         o
word has:              4 characters
Replace word:          wo-- $ --
Remove end characters: w

*/