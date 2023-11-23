#include <iostream>
using namespace std;
int main(){
    // Các biến giữ giá thông thường
    // số tiền chiết khấu và giá bán
    double regularPrice = 59.95, discont, selaPrice;

     //tính số tiền được giảm giá 20%
    discont = regularPrice * 0.2;

    //Tính giá bán bằng cách trừ đi giảm giá thông thường
    selaPrice = regularPrice - discont;

    //Kết quả hiển thị 
    cout << "regular Price :  $" << regularPrice <<endl;
    cout << "discont :  $" << discont << endl;
    cout << "sela Price :  $" << selaPrice << endl;
    
    return 0;
}