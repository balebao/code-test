#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int soNV = 5; // Số lượng nhân viên
    int hours[soNV ]; // Lưu trữ số giờ làm việc
    double payRate[soNV ]; // Lưu trữ tỷ lệ lương theo giờ

    // Nhập số giờ làm việc và tỷ lệ lương theo giờ.
    cout << "nhap so gio lam viec " << soNV 
         << " nv va so giio lam viec tuong ung.\n";
    for (int index = 0; index < soNV ; index++)
    {
        cout << "so gio lam viec cua nhan vien #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Ti le luong cua nhn vien #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hiển thị tổng lương của từng nhân viên.
    cout << "tong luong cua moi nhan vien:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < soNV ; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "nhan vien #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}
