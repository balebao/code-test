#include <iostream>
using namespace std;
int main(){
 int giaBan,
     motBanMach = 14.95;

     //tính gia bán 1 bản mạch với lãi 35%
     giaBan = motBanMach + (motBanMach * 35 / 100);

     //ket qua hien thi
     cout << giaBan << " USD la gia ban cua mot ban mach voi lai xuat 35%" << endl;
     return 0;

}