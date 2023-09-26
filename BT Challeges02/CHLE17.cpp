#include <iostream>
using namespace std;
int main (){


//các biến giá trị 
int coPhieu = 750,
    rose,tienCoPhieu,
    thanhToan,
    gia = 35;

    //tính tiền mua 750 cổ phiếu
    tienCoPhieu = coPhieu * gia;

    //tính số tiền hoa hồng
    rose = tienCoPhieu * 2 / 100;

    //tính tổng số tiền cần tính toán
    thanhToan = tienCoPhieu + rose;


    //in kết quả tính toán
    cout << tienCoPhieu << " USD la tien co phieu\n";
    cout <<  rose << " USD la tien hoa hong cua giao dich\n";
    cout << thanhToan << " USD la tong so tien can thanh toan" << endl;

    return 0;

}