#include <iostream>
using namespace std;
int main (){

    int book;
    int month;
    double perMonth;
    cout << " How many books do you plan to read?";
    cin >> book;
    cout << " How many months will it take you to read them? ";
    cin >> month;
    perMonth = static_cast<double>(book) / month;
    cout << " That is " << perMonth << " books per month.\n";
    return 0;
}