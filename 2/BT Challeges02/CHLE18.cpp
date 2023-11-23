#include <iostream>
using namespace std;
int main(){

    int khaoSat = 16500,
        tagLuc,
        tagLucCamQuyt;

    //tính số người mua nước tăng lực<15%>
    tagLuc = khaoSat * 15 / 100;

    //tính số người mua tăng lực vị cam quýt<58%>
    tagLucCamQuyt = tagLuc * 58 / 100;

    //kết quả hiển thị
    cout << "co khoang " << tagLuc << " nguoi mua nuoc tang luc\n";
    cout << " trong do co " << tagLucCamQuyt << " nguoi mua tang luc vi cam quyt" << endl;

    return 0;
}