#include <iostream>
using namespace std;
int main (){
  const int soNV = 6;
  int soGio[soNV];
  int count;
  //nhap so giờ làm viecj cửa từng người
 for(count = 0; count < soNV ;count++){
    cout << "nhap so gio lm viec cua nhan vien "
         << (count +1 ) <<":";
         cin >> soGio[count];
         }
 cout << "so gio lam viec cua moi nguoi:";
//  in ra số giờ làm việc
 for (count = 0; count < soNV; count++)
 cout << " " << soGio[count];
 cout << endl;
 return 0;
}