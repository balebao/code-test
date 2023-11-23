#include <iostream>

using namespace std;
//khai bao cac bien chi phi hang thang 
int main() {
    int khoanVay, BH, xang, dau, baoDuong;
   cout << "nhap chi phi cua khoan vay ";
   cin >> khoanVay;
   cout << "nhap chi phi cua BH    ";
   cin >> BH;
   cout << "nhap chi phi cua xang   ";
   cin >> xang;
   cout << "nhap chi phi cua dau    ";
   cin >> dau; 
   cout << "nhap chi phi cua bao duong    ";
   cin >> baoDuong;
  //tong chi phis 1 thang
  double tongThang = khoanVay + BH + xang + dau + baoDuong;
  //tong chi phi 1 nam
  double tongNam = tongThang * 12;
   cout << " tong so tien can chi phi " << tongThang << " $ 1 thang"<< endl;
     cout << " tong so tien can chi phi " << tongNam << " $ 1 nam"<< endl;

    return 0;
}