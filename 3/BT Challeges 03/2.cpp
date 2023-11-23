#include <iostream>
#include <iomanip>
using namespace std;
int main(){
const double ggheHangA = 15,
             ggheHangB = 12,
             ggheHangC = 9;

int sogBanHangA,
    sogBanHangB,
    sogBanHangC;

    cout <<"nhap so ghe ban duooc hang A : ";
    cin >> sogBanHangA; 
    cout <<"nhap so ghe ban duooc hang B : ";
    cin >> sogBanHangB;
    cout <<"nhap so ghe ban duooc hang c : ";
    cin >> sogBanHangC;

    //soo tien ban tung loai ghe
    double tienThuLoaiA = sogBanHangA * ggheHangA;
    double tienThuLoaiB = sogBanHangB * ggheHangB;
    double tienThuLoaiC = sogBanHangC * ggheHangC;
    //tong so tien thu duoc car ba loai
    double tong = tienThuLoaiA + tienThuLoaiB + tienThuLoaiC;
    cout <<"tong so tien ban duoc cuar ca ba loai "<< setprecision(2) << tong << endl;
    return 0;
}