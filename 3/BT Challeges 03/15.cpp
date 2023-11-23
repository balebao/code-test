#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  double giaTriTT,giaTriDanhGia,thueTaiSan;
 cout << " nhap gia tri thuc te cua tai san ";
 cin >>  giaTriTT;
 //tinh gia tri danh gia
 giaTriDanhGia = giaTriTT * 0.6;
 //tinh thue tai san 
 thueTaiSan = (giaTriDanhGia / 100) * 0.75;

    cout << fixed << setprecision(2); // Định dạng đầu ra với hai số thập phân
    cout << "gia tri danh gia: $" << giaTriDanhGia << endl;
    cout << "thue tai san: $" << thueTaiSan << endl;
    return 0;
}