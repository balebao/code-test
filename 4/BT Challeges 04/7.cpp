#include <iostream>
#include <cmath>
using namespace std;
int main (){ 
   int giay;
   cout << " nhap so giay: ";
   cin >> giay;
   //tính số phút
   int phut = giay / 60;
   int giayDu = giay % 60;
   //tính số giờ
   int gio = phut / 60;
       phut = phut % 60;
   //tính số ngày 
   int ngay = gio / 60;
       gio = gio % 60;

  //thu được kết quả
  cout << "thoi gian tuong ung: "<< ngay << " ngay "
  << gio << " gio "<< phut << " phut "<< giayDu << " giay "<< endl; 

return 0;
}