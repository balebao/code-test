#include <iostream>
using namespace std;
int main(){
    int ngay,thang,nam;
  cout << " nhap ngay,thang va nam duoi dang xx/yy/zz\n";
  cin >> ngay >> thang >> nam;
  if(  ngay * thang == nam)
  cout << "day la mot ngay ki dieu\n";
  else
  cout << "day khong la mot ngay ki dieu\n";
    return 0;
}