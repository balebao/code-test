#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int a;
 //kiem tra so nhap du dieu kien
 while (true) {
   cout << " nhap so nguyen duong: ";
   cin >> a;
   if (a <= 0) {
    cout << "nhap so nguyen duong " << endl;
   }else{
   break; //lenh ket thuc
 }
 }
 // su dung vong lap for
  int sum = 0;
  for( int i = 1;i <= a ; i++){
  sum += i;
  }// ket qua hien thi
  cout << " tong cac so nguyen tu 1 toi "<< a << " la: "<< sum <<endl;
  return 0;
}
 
 
 
 
