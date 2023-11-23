#include <iostream>
using namespace std;
int main (){
    const int gia = 99;
    int luongBan;
    int chiPhi;
    cout << " nhap so luong ban\n";
    cin >> luongBan;
    if(luongBan < 10){
    double chiPhi = luongBan * 99;
    cout << " tong chi phi giao dich: " << chiPhi << "$"<< endl;
}else if (luongBan > 10 && luongBan < 20){
    double chiPhi = luongBan * 99 * 0.2;
    cout << " tong chi phi giao dich: " << chiPhi << "$"<< endl;
}else if (luongBan > 20 && luongBan <50 ){
    double chiPhi = luongBan * 99 * 0.3;
      cout << " tong chi phi giao dich: " << chiPhi << "$"<< endl;
}else if (luongBan > 50 && luongBan < 100){
    double chiPhi = luongBan * 99 * 0.4;
      cout << " tong chi phi giao dich: " << chiPhi << "$"<< endl;
}else {
    double chiPhi = luongBan * 99 * 0.5;
      cout << " tong chi phi giao dich: " << chiPhi << "$"<< endl;
}
return 0;
}