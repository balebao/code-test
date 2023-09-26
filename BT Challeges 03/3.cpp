#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 int soLanKt = 5;
double tongDiem = 0.0;// gan cho muc diem khi dat gia tri thap nhat

int i = 0;
for (i = 0 ;i < soLanKt ; i++){
cout << "\nnhap diem kiem tra cac lan " << (i+1)<< " : ";
double diem;
cin >> diem;
tongDiem += diem; 
}
double TBdiemKT = tongDiem / soLanKt;
cout << "tb diem kiem tra la " << setprecision(1) << TBdiemKT << endl;

return 0;
}