#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
// Die class for simulating die rolls
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
    // Create an instance of the Die class with 6 sides
    Die die(6);

    // Variables for user input and fishing points
    char continueFishing;
    int fishingPoints = 0;

    // Game loop
    do {
        // Ask the user if they want to continue fishing
        cout << "Do you want to fish for more items? (y/n): ";
        cin >> continueFishing;

        // Roll the die to determine the caught item
        int dieResult = die.roll();

        // Determine fishing points based on the caught item
        switch (dieResult) {
            case 1:
                cout << "You caught a huge fish! (+5 points)" << endl;
                fishingPoints += 5;
                break;
            case 2:
                cout << "You caught an old shoe! (+1 point)" << endl;
                fishingPoints += 1;
                break;
            case 3:
                cout << "You caught a little fish! (+2 points)" << endl;
                fishingPoints += 2;
                break;
            // Add more cases for other possible items
            // ...
            default:
                cout << "Invalid die result." << endl;
                break;
        }

    } while (continueFishing == 'y' || continueFishing == 'Y');

    // Display total fishing points and congratulate the user
    cout << "Total fishing points: " << fishingPoints << endl;

    if (fishingPoints >= 10) {
        cout << "Congratulations! You're a master angler!" << endl;
    } else if (fishingPoints >= 5) {
        cout << "Well done! You've caught some good fish!" << endl;
    } else {
        cout << "Better luck next time. Keep practicing!" << endl;
    }

    return 0;
}
