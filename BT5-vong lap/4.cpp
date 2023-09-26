#include <iostream>
using namespace std;

int main()
{
    const double maxTemp = 102.5; // Nhiet do toi da
    double temperature; // Luu tru nhiet do

    cout << "Nhap nhiet do Celsius cua chat: ";
    cin >> temperature;

    while (temperature > maxTemp)
    {
        cout << "Nhiet do qua cao. Giam bo dieu chinh nhiet do\n";
        cout << "va doi 5 phut. Sau do kiem tra nhiet do Celsius\n";
        cout << "lai va nhap o day: ";
        cin >> temperature;
    }

    cout << "Nhiet do la chap nhan duoc.\n";
    cout << "Kiem tra lai sau 15 phut.\n";

    return 0;
}
