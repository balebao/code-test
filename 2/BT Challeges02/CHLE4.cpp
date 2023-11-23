#include <iostream>
using namespace std;
int main(){

float chiPhiBuaAn = 87.67;       
float tienBo,
    thue,
    thanhtoan;

//tính thue chiếm 6.25% chi phí bữa ăn
thue = chiPhiBuaAn *6.25 / 100;


//tính tiền bo bằng 20% chi phí bữa ăn cộng thuế
tienBo = ( chiPhiBuaAn + thue ) * 20 / 100;


//tổng sô tiền cần trả
thanhtoan = chiPhiBuaAn + thue + tienBo;

//in ra kết quả hóa đơn thanh toán 
cout << " chi phi bua an:  " << chiPhiBuaAn << "$\n";
cout << " so tien thue:  " << thue << "$\n";
cout << " so tien bo:  " << tienBo << "$\n";
cout << " tong so tien can thah toan la:  " << thanhtoan << "$" << endl;


 return 0;  


}