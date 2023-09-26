#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Celsius - Fahrenheit" << endl;

    for (int celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (celsius * 9 / 5) + 32.0;
        cout << celsius << "C - " << fahrenheit <<"F" << endl;
    }

    return 0;
    }
