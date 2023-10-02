#include <iostream>
#include <iomanip>
using namespace std;

const int soKHi = 3;
const int soNgay = 5;

int main() {
    double foodConsumption[soKHi][soNgay];
    double totalFood = 0.0;
    double minFood = 99999.0; // Initialize to a high value
    double maxFood = 0.0;

    // Input the data for each monkey.
    for (int monkey = 0; monkey < soKHi; monkey++) {
        cout << "Enter the food consumption for Monkey " << (monkey + 1) << " for each day of the week:\n";
        for (int day = 0; day < soNgay; day++) {
            do {
                cout << "Day " << (day + 1) << ": ";
                cin >> foodConsumption[monkey][day];
                if (foodConsumption[monkey][day] < 0) {
                    cout << "Please enter a non-negative value.\n";
                }
            } while (foodConsumption[monkey][day] < 0);

            totalFood += foodConsumption[monkey][day];

            if (foodConsumption[monkey][day] < minFood) {
                minFood = foodConsumption[monkey][day];
            }

            if (foodConsumption[monkey][day] > maxFood) {
                maxFood = foodConsumption[monkey][day];
            }
        }
    }

    // Calculate the average food consumption per day for the whole family of monkeys.
    double averageFoodPerDay = totalFood / (soKHi * soNgay);

    // Display the results.
    cout << fixed << showpoint << setprecision(2);
    cout << "Average food consumption per day for the family of monkeys: " << averageFoodPerDay << " pounds\n";
    cout << "Least amount of food eaten during the week by any one monkey: " << minFood << " pounds\n";
    cout << "Greatest amount of food eaten during the week by any one monkey: " << maxFood << " pounds\n";

    return 0;
}
