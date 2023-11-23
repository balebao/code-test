#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng luồng tệp
    int soNgay; // Số ngày bán hàng
    double doanhSo; // Số tiền bán hàng trong một ngày

    // Nhập số ngày.
    cout << "ban trong bao nhieu ngay? ";
    cin >> soNgay;

    // Mở tệp có tên Sales.txt.
    outputFile.open("Sales.txt");

    // Nhập số tiền bán hàng cho mỗi ngày và ghi vào tệp.
    for (int dem = 1; dem <= soNgay; dem++)
    {
        // Nhập số tiền bán hàng trong một ngày.
        cout << "nhap so tien ban hang ngay thu 3 "
             << dem << ": ";
        cin >> doanhSo;

        // Ghi số tiền bán hàng vào tệp.
        outputFile << doanhSo << endl;
    }

    // Đóng tệp lại.
    outputFile.close();
    cout << "du lieu da duoc ghi vao Sales.txt\n";
    return 0;
}
