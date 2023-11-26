#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
class Coin {
private:
    string sideUp;

public:
    // Default constructor
    Coin() {
        // Initialize random seed based on current time
        srand(static_cast<unsigned int>(time(0)));

        // Randomly determine the side of the coin that is facing up
        toss();
    }

    // Function to simulate the tossing of the coin
    void toss() {
        // Generate a random number (0 or 1)
        int randomNumber = rand() % 2;

        // Set sideUp based on the random number
        if (randomNumber == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    // Function to get the value of sideUp
    string getSideUp() const {
        return sideUp;
    }
};

int main() {
    Coin myCoin;

    // Display the side initially facing up
    cout << "Initial side facing up: " << myCoin.getSideUp() << endl;

    // Variables to keep track of heads and tails count
    int headsCount = 0;
    int tailsCount = 0;

    // Toss the coin 20 times
    for (int i = 0; i < 20; ++i) {
        myCoin.toss();
        cout << "After toss " << (i + 1) << ": " << myCoin.getSideUp() << endl;

        // Update heads and tails count
        if (myCoin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    // Display the results
    cout << "\nHeads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}

