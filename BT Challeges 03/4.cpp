#include <iostream>
#include <string>
using namespace std;
int main(){
string thgThuNhat,thgThuHai,thgThuBa;
double muaThuNhat,muaThuHai,muaThuBa;
//nhap ten thang cung lung mua
cout << "nhap ten thang thu nhat: ";
cin >> thgThuNhat;
cout << " nhap luong mua thang: ";
cin >> muaThuNhat;

cout <<" nhap ten thang thu hai: ";
cin >> thgThuHai;
cout << " nhap luong mua thang: ";
cin >> muaThuHai;

cout <<" nhap ten thang thu ba: ";
cin >> thgThuBa;
cout << " nhap luong mua thang: ";
cin >> muaThuBa;
//tb luong mua cua ba thang
double tbLgMua = (muaThuNhat + muaThuHai + muaThuBa) / 3;
cout << " luong mua trung binh trong ba thang " << tbLgMua << " inch " << endl;
return 0;
}