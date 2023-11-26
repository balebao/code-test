#include <iostream>
#include <string>
using namespace std;
class Question {
private:
    string questionText;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;

public:
    // Constructor
    Question(string text, string a1, string a2, string a3, string a4, int correct)
        : questionText(text), answer1(a1), answer2(a2), answer3(a3), answer4(a4), correctAnswer(correct) {}

    // Accessor functions
    string getQuestionText() const {
        return questionText;
    }

    string getAnswer1() const {
        return answer1;
    }

    string getAnswer2() const {
        return answer2;
    }

    string getAnswer3() const {
        return answer3;
    }

    string getAnswer4() const {
        return answer4;
    }

    int getCorrectAnswer() const {
        return correctAnswer;
    }
};

int main() {
    // Create an array of 10 Question objects with trivia questions and answers
    Question triviaQuestions[10] = {
        {"What is the capital of France?", "Berlin", "Paris", "Madrid", "London", 2},
        {"Which planet is known as the Red Planet?", "Mars", "Venus", "Jupiter", "Saturn", 1},
        {"Who wrote 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain", 2},
        {"In what year did World War II end?", "1945", "1939", "1950", "1940", 1},
        {"What is the largest mammal on Earth?", "Elephant", "Blue Whale", "Giraffe", "Polar Bear", 2},
        {"Which programming language is often used for web development?", "Java", "Python", "C++", "JavaScript", 4},
        {"Who painted the Mona Lisa?", "Vincent van Gogh", "Pablo Picasso", "Leonardo da Vinci", "Claude Monet", 3},
        {"What is the capital of Japan?", "Seoul", "Beijing", "Tokyo", "Bangkok", 3},
        {"Which element has the chemical symbol 'O'?", "Oxygen", "Gold", "Iron", "Carbon", 1},
        {"What is the largest ocean on Earth?", "Atlantic Ocean", "Indian Ocean", "Southern Ocean", "Pacific Ocean", 4}
    };

    // Players' scores
    int player1Score = 0;
    int player2Score = 0;

    // Loop through each question
    for (int i = 0; i < 10; ++i) {
        cout << "\nQuestion " << (i + 1) << ": " << triviaQuestions[i].getQuestionText() << endl;
        cout << "1. " << triviaQuestions[i].getAnswer1() << endl;
        cout << "2. " << triviaQuestions[i].getAnswer2() << endl;
        cout << "3. " << triviaQuestions[i].getAnswer3() << endl;
        cout << "4. " << triviaQuestions[i].getAnswer4() << endl;

        // Get player 1's answer
        int player1Answer;
        cout << "Player 1, enter your answer (1-4): ";
        cin >> player1Answer;

        // Validate player 1's answer
        if (player1Answer >= 1 && player1Answer <= 4) {
            // Check if the answer is correct
            if (player1Answer == triviaQuestions[i].getCorrectAnswer()) {
                cout << "Correct! Player 1 earns a point." << endl;
                player1Score++;
            } else {
                cout << "Incorrect! The correct answer is " << triviaQuestions[i].getCorrectAnswer() << "." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        }

        // Get player 2's answer
        int player2Answer;
        cout << "Player 2, enter your answer (1-4): ";
        cin >> player2Answer;

        // Validate player 2's answer
        if (player2Answer >= 1 && player2Answer <= 4) {
            // Check if the answer is correct
            if (player2Answer == triviaQuestions[i].getCorrectAnswer()) {
                cout << "Correct! Player 2 earns a point." << endl;
                player2Score++;
            } else {
                cout << "Incorrect! The correct answer is " << triviaQuestions[i].getCorrectAnswer() << "." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
        }
    }

    // Display players' scores
    cout << "\nPlayer 1 Score: " << player1Score << endl;
    cout << "Player 2 Score: " << player2Score << endl;

    // Determine the winner
    if (player1Score > player2Score) {
        cout << "Player 1 is the winner!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 is the winner!" << endl;
    } else {
        cout << "It's a tie! Both players have the same score." << endl;
    }

    return 0;
}
