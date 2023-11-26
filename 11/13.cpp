#include <iostream>
#include <iomanip>
using namespace std;
struct Drink {
    string name;
    double cost;
    int quantity;
};

// Function to display the menu of drinks
void displayMenu(const Drink drinks[], int size) {
    cout << "Menu:\n";
    cout << setw(15) << "Drink Name" << setw(10) << "Cost" << setw(20) << "Quantity\n";
    for (int i = 0; i < size; ++i) {
        cout << setw(15) << drinks[i].name << setw(10) << drinks[i].cost << setw(20) << drinks[i].quantity << "\n";
    }
}

// Function to simulate the soft drink machine
void simulateMachine(Drink drinks[], int size) {
    double totalEarnings = 0;

    while (true) {
        // Display menu
        displayMenu(drinks, size);

        // Ask user to pick a drink or quit
        cout << "\nEnter the number of the drink you want to purchase (1-" << size << "), or enter 0 to quit: ";
        int choice;
        cin >> choice;

        if (choice < 0 || choice > size) {
            cout << "Invalid choice. Please enter a valid option.\n";
            continue;
        }

        if (choice == 0) {
            // User chose to quit
            break;
        }

        // User selected a drink
        int index = choice - 1;

        if (drinks[index].quantity > 0) {
            // Drink is available
            double amountInserted;
            cout << "Enter the amount of money you want to insert: $";
            cin >> amountInserted;

            if (amountInserted >= drinks[index].cost) {
                // User has inserted enough money
                double change = amountInserted - drinks[index].cost;
                totalEarnings += drinks[index].cost;

                cout << "Dispensing " << drinks[index].name << ". Change: $" << change << "\n";
                drinks[index].quantity--;
            } else {
                cout << "Insufficient funds. Please insert more money.\n";
            }
        } else {
            // Drink is sold out
            cout << drinks[index].name << " is sold out.\n";
        }
    }

    // Display total earnings
    cout << "Total earnings: $" << totalEarnings << "\n";
}

int main() {
    // Initialize the array of drinks
    Drink drinks[] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    // Run the simulation
    simulateMachine(drinks, sizeof(drinks) / sizeof(drinks[0]));

    return 0;
}
