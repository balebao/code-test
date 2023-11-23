#include <iostream>
using namespace std;
int main (){
 
 float in1year = 1.5,
       in5year,     //tăng trong 5 năm
       in7year,     //tăng trong 7 năm
       in10year;    //tăng trong 10 năm

     //tính mức nước tăng lần lượt qua các năm 
     in5year = in1year * 5;   
     in7year = in1year * 7;   
     in10year = in1year *10;  

     //hiển thị kêt quả
     cout << "Muc nuoc tang trong 5 nam so voi hien tai la: "<< in5year << "m";
     cout << "\nMuc nuoc tang trong 7 nam so voi hien tai la: "<< in7year << "m";
     cout << "\nMuc nuoc tang trong 10 nam so voi hien tai la: "<< in10year << "m" << endl;

     return 0;

}