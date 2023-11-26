#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>
using  namespace std;
// Function to convert the date format
string convertDateFormat(const string& inputDate) {
    tm tm = {};
    istringstream iss(inputDate);
    iss >> get_time(&tm, "%m/%d/%Y");

    if (iss.fail()) {
        return "Invalid date format. Please use mm/dd/yyyy.";
    }

    ostringstream oss;
    oss << put_time(&tm, "%B %d, %Y");
    return oss.str();
}

int main() {
    
    string userDate;

    // Ask the user to enter a date
    cout << "Enter a date in the form mm/dd/yyyy: ";
    cin >> userDate;

    // Convert and display the date in the desired format
    string formattedDate = convertDateFormat(userDate);
    cout << "Formatted date: " << formattedDate << endl;

    return 0;
}
