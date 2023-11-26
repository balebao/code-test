#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
class Die {
private:
    int sides;

public:
    // Constructor
    Die(int numSides) : sides(numSides) {
        // Seed for random number generation
        srand(static_cast<unsigned int>(time(0)));
    }

    // Function to roll the die
    int roll() const {
        return rand() % sides + 1;
    }
};

int main() {
    // Create instances of the Die class for computer and player dice
    Die computerDie(6);
    Die playerDie(6);

    // Variables for computer and player points
    int computerPoints = 0;
    int playerPoints = 0;

    // Loop for each round of the game
    char rollAgain;
    do {
        // Computer's turn
        int computerRoll = computerDie.roll();
        computerPoints += computerRoll;
        cout << "Computer rolls: " << computerRoll << endl;

        // Player's turn
        int playerRoll = playerDie.roll();
        playerPoints += playerRoll;
        cout << "You roll: " << playerRoll << endl;

        // Ask the player if they want to roll again
        cout << "Do you want to roll again? (y/n): ";
        cin >> rollAgain;

    } while (rollAgain == 'y' || rollAgain == 'Y' && playerPoints <= 21);

    // Display computer's total points
    cout << "\nComputer's total points: " << computerPoints << endl;

    // Determine the winner
    if (computerPoints > 21 && playerPoints > 21) {
        cout << "It's a tie! Both the computer and you went over 21." << endl;
    } else if (computerPoints > 21) {
        cout << "Computer busts! You win!" << endl;
    } else if (playerPoints > 21) {
        cout << "You bust! Computer wins!" << endl;
    } else if (computerPoints > playerPoints) {
        cout << "Computer wins!" << endl;
    } else if (playerPoints > computerPoints) {
        cout << "You win!" << endl;
    } else {
        cout << "It's a tie! Both the computer and you have the same points." << endl;
    }

    return 0;
}


