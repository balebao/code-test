#include <iostream>
#include <iomanip>
using namespace std; 
// Structure to hold monthly budget categories
struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function to input amounts spent in each budget category
void inputExpenses(MonthlyBudget& budget) {
    cout << "Enter amounts spent in each budget category for the month:\n";

    cout << "Housing: ";
    cin >> budget.housing;

    cout << "Utilities: ";
    cin >> budget.utilities;

    cout << "Household Expenses: ";
    cin >> budget.householdExpenses;

    cout << "Transportation: ";
    cin >> budget.transportation;

    cout << "Food: ";
    cin >> budget.food;

    cout << "Medical: ";
    cin >> budget.medical;

    cout << "Insurance: ";
    cin >> budget.insurance;

    cout << "Entertainment: ";
    cin >> budget.entertainment;

    cout << "Clothing: ";
    cin >> budget.clothing;

    cout << "Miscellaneous: ";
    cin >> budget.miscellaneous;
}

// Function to display the budget report
void displayBudgetReport(const MonthlyBudget& budget) {
    // Original budget amounts
    const double originalBudget[] = {500.00, 150.00, 65.00, 50.00, 250.00, 30.00, 100.00, 150.00, 75.00, 50.00};

    // Display header
    cout << "\nBudget Category\t\tOriginal Budget\t\tAmount Spent\t\tOver/Under\n";
    cout << "-------------------------------------------------------------------\n";

    double totalOverUnder = 0.0;

    // Display each budget category and the over/under amount
    for (int i = 0; i < 10; ++i) {
        double overUnder = originalBudget[i] - budget.housing;

        cout << fixed << setprecision(2);
        cout << left << setw(20) << setfill(' ') << fixed << setprecision(2) << left << setw(20);

        cout << fixed << setprecision(2) << left << setw(20) << setfill(' ') << overUnder << "\n";

        totalOverUnder += overUnder;
    }

    // Display total over/under amount for the entire monthly budget
    cout << "\nTotal Over/Under for the Monthly Budget: $" << totalOverUnder << "\n";
}

int main() {
    MonthlyBudget userBudget;

    // Input amounts spent in each budget category
    inputExpenses(userBudget);

    // Display budget report
    displayBudgetReport(userBudget);

    return 0;
}
