#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int soThuNhat, soThuHai, soThuBa, tong;

    // Mở tệp.
    inFile.open("NumericData.txt");

    // Đọc ba số từ tệp.
    inFile >> soThuNhat;
    inFile >> soThuHai;
    inFile >> soThuBa;

    // Đóng tệp lại.
    inFile.close();

    // Tính tổng của ba số.
    tong = soThuNhat + soThuHai + soThuBa;

    // Hiển thị ba số.
    cout << "ba so doc duoc:\n"
         << soThuNhat << " " << soThuHai << " " << soThuBa << endl;

    // Hiển thị tổng của ba số.
    cout << "Tong cua ba so: " << tong << endl;

    return 0;
}
