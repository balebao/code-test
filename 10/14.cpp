#include <iostream>
#include <cctype> // For isupper function
using  namespace std;
// Function to convert the sentence format
string convertSentenceFormat(const string& inputSentence) {
    string outputSentence;
    bool newWord = true; // Flag to track the start of a new word

    for (char ch : inputSentence) {
        if (newWord) {
            outputSentence += toupper(ch); // Convert the first character of the word to uppercase
            newWord = false;
        } else {
            if (isupper(ch)) {
                outputSentence += ' '; // Add a space before an uppercase letter
            }
            outputSentence += tolower(ch); // Convert the remaining characters to lowercase
        }

        // Update the flag for the next iteration
        newWord = (ch == ' '); // Set to true if a space is encountered, indicating the start of a new word
    }

    return outputSentence;
}

int main() {
    
    string userInput;

    // Ask the user to enter a sentence
    cout << "Enter a sentence with words run together: ";
    getline(cin, userInput);

    // Convert and display the sentence in the desired format
    string formattedSentence = convertSentenceFormat(userInput);
    cout << "Formatted sentence: " << formattedSentence << endl;

    return 0;
}
