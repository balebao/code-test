#include <iostream>
#include <iomanip>
using namespace std;
// Define the Drink structure
struct Drink {
    string name;
    double cost;
    int quantity;
};

// Function to display the list of drinks
void displayDrinks(const Drink drinks[], int numDrinks) {
    cout << "\nDrinks Available:\n";
    for (int i = 0; i < numDrinks; ++i) {
        cout << i + 1 << ". " << setw(12) << drinks[i].name << " - $" << drinks[i].cost;
        if (drinks[i].quantity > 0) {
            cout << " (Quantity: " << drinks[i].quantity << ")\n";
        } else {
            cout << " (Sold Out)\n";
        }
    }
    cout << "0. Quit\n";
}

// Function to simulate the soft drink machine
void simulateSoftDrinkMachine(Drink drinks[], int numDrinks) {
    double totalEarnings = 0.0;

    while (true) {
        displayDrinks(drinks, numDrinks);

        int choice;
        cout << "Enter your choice (0 to quit): ";
        cin >> choice;

        if (choice < 0 || choice > numDrinks) {
            cout << "Invalid choice. Please enter a valid option.\n";
            continue;
        }

        if (choice == 0) {
            cout << "Quitting the program. Total earnings: $" << totalEarnings << "\n";
            break;
        }

        int quantity = drinks[choice - 1].quantity;
        if (quantity > 0) {
            double insertedMoney;
            cout << "Enter the amount of money to insert: $";
            cin >> insertedMoney;

            if (insertedMoney >= drinks[choice - 1].cost) {
                double change = insertedMoney - drinks[choice - 1].cost;
                totalEarnings += drinks[choice - 1].cost;
                drinks[choice - 1].quantity--;
                cout << "Dispensing " << drinks[choice - 1].name << "...\n";
                cout << "Change: $" << fixed << setprecision(2) << change << "\n";
            } else {
                cout << "Insufficient funds. Please insert more money.\n";
            }
        } else {
            cout << "Sorry, " << drinks[choice - 1].name << " is sold out.\n";
        }
    }
}

int main() {
    const int numDrinks = 5;
    Drink drinks[numDrinks] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    simulateSoftDrinkMachine(drinks, numDrinks);

    return 0;
}
