#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    int month;
    int day;
    int year;

public:
    // Constructor
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    // Member function to print the date in the format MM/DD/YYYY
    void printFormat1() const {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Member function to print the date in the format Month DD, YYYY
    void printFormat2() const {
        string monthNames[] = {
            "", "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << monthNames[month] << " " << day << ", " << year << endl;
    }

    // Member function to print the date in the format DD Month YYYY
    void printFormat3() const {
        string monthNames[] = {
            "", "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << day << " " << monthNames[month] << " " << year << endl;
    }
};

int main() {
    // Create a Date object with the date 12/25/2014
    Date myDate(12, 25, 2014);

    // Print the date in different formats
    cout << "Format 1: ";
    myDate.printFormat1();

    cout << "Format 2: ";
    myDate.printFormat2();

    cout << "Format 3: ";
    myDate.printFormat3();

    return 0;
}
