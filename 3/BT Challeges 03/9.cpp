#include <iostream>
using namespace std;
int main (){
    const int TuiBanh = 30;
    const int luongCalo = 300;

    int soBanhDaAn;
    cout << "nhap so luong banh da an ";
    cin >> soBanhDaAn;

    int tongLuongCalo = (soBanhDaAn * luongCalo);
    cout << "tong so calo da tieu thu la "<< tongLuongCalo << " calo" <<endl;
    return 0;

}