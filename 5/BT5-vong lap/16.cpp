#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int soThuNhat, soThuHai, soThuBa;

    // Mở tệp đầu ra.
    outputFile.open("So.txt");

    // Nhập ba số từ người dùng.
    cout << "nhap mot so: ";
    cin >> soThuNhat;
    cout << "nhap 1 so nua: ";
    cin >> soThuHai;
    cout << "nhap them mot so nua: ";
    cin >> soThuBa;

    // Ghi các số vào tệp.
    outputFile << soThuNhat << endl;
    outputFile << soThuHai << endl;
    outputFile << soThuBa << endl;
    cout << "cac so da duoc luu vao tep.\n";

    // Đóng tệp
    outputFile.close();
    cout << "hoan thanh\n";
    return 0;
}
