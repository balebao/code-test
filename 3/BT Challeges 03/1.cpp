#include <iostream>
using namespace std;
int main (){
    int gioiHanChua,
        gioiHanDi,
        ghTren1Donvi;

    cout << " nhap so galon khi toi da cos the chua ";
    cin >> gioiHanChua;
    cout << "nhap gioi han di toi da ";
    cin >> gioiHanDi;
    ghTren1Donvi = gioiHanDi / gioiHanChua;
    cout << " gio han ddi(km) cua 1 galon khi la : " << ghTren1Donvi <<endl;
    return 0;
}