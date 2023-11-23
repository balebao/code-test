#include <iostream>
#include <string>
using namespace std;

int main() {
    int temperature;

    cout << "nhap nhiet do  (F): ";
    cin >> temperature;

    cout << "cac chat dong o " << temperature << " F:" << endl;
    if (temperature <= -173)
        cout << "Ethyl alcohol" << endl;
    if (temperature <= -38)
        cout << "Mercury" << endl;
    if (temperature <= -362)
        cout << "Oxygen" << endl;
    if (temperature <= 32)
        cout << "Water" << endl;

    cout << "cac chat soi o " << temperature << " F:" << endl;
    if (temperature >= 172)
        cout << "Ethyl alcohol" << endl;
    if (temperature >= 676)
        cout << "Mercury" << endl;
    if (temperature >= -306)
        cout << "Oxygen" << endl;
    if (temperature >= 212)
        cout << "Water" << endl;

    return 0;
}
