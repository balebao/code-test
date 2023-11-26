#include <iostream>
#include <string>
using namespace std;
// Define the DivisionData structure
struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function to input sales data for a division
void inputSalesData(DivisionData& division) {
    cout << "Enter sales data for division " << division.divisionName << ":\n";
    cout << "First Quarter Sales: ";
    cin >> division.firstQuarterSales;
    cout << "Second Quarter Sales: ";
    cin >> division.secondQuarterSales;
    cout << "Third Quarter Sales: ";
    cin >> division.thirdQuarterSales;
    cout << "Fourth Quarter Sales: ";
    cin >> division.fourthQuarterSales;

    // Calculate total annual sales and average quarterly sales
    division.totalAnnualSales = division.firstQuarterSales +
                                division.secondQuarterSales +
                                division.thirdQuarterSales +
                                division.fourthQuarterSales;

    division.averageQuarterlySales = division.totalAnnualSales / 4.0;
}

// Function to display sales data for a division
void displayDivisionData(const DivisionData& division) {
    cout << "\nDivision: " << division.divisionName << endl;
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
    cout << "------------------------\n";
}

int main() {
    // Create variables for each division
    DivisionData eastDivision = {"East"};
    DivisionData westDivision = {"West"};
    DivisionData northDivision = {"North"};
    DivisionData southDivision = {"South"};

    // Input sales data for each division
    inputSalesData(eastDivision);
    inputSalesData(westDivision);
    inputSalesData(northDivision);
    inputSalesData(southDivision);

    // Display sales data for each division
    displayDivisionData(eastDivision);
    displayDivisionData(westDivision);
    displayDivisionData(northDivision);
    displayDivisionData(southDivision);

    return 0;
}
