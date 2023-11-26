#include <iostream>
#include <sstream>
#include <vector>
#include <cctype> // For isalpha function
using  namespace std;
// Function to convert a word to Pig Latin
string convertToPigLatin(const string& word) {
    if (word.empty() || !isalpha(word[0])) {
        return word; // Return unchanged if the word is empty or doesn't start with an alphabetic character
    }

    string pigLatinWord = word.substr(1) + word[0] + "ay";
    return pigLatinWord;
}

// Function to convert a sentence to Pig Latin
string convertSentenceToPigLatin(const string& sentence) {
    istringstream iss(sentence);
    string word;
    vector<string> pigLatinWords;

    // Read each word from the sentence and convert to Pig Latin
    while (iss >> word) {
        pigLatinWords.push_back(convertToPigLatin(word));
    }

    // Join the Pig Latin words to form the Pig Latin sentence
    ostringstream oss;
    for (const auto& pigLatinWord : pigLatinWords) {
        oss << pigLatinWord << ' ';
    }

    return oss.str();
}

int main() {
    string userInput;

    // Ask the user to enter a sentence
    cout << "Enter a sentence: ";
    getline(cin, userInput);

    // Convert and display the sentence in Pig Latin
    string pigLatinSentence = convertSentenceToPigLatin(userInput);
    cout << "Pig Latin: " << pigLatinSentence << endl;

    return 0;
}
