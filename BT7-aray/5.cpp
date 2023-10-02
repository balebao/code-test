#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3; // kích thước mảng
    int values[SIZE]; // Mảng gồm 3 số nguyên
    int count; // Biến đếm vòng lặp

    // Cố gắng lưu năm số vào mảng có ba phần tử.
    cout << "luu 5 so vao mang co ba phan tu!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // Nếu chương trình vẫn hoạt động, hiển thị các số.
    cout << "neu bn thay tb nay ngha la\n";
    cout << "khong bi treo! day la cac so:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}
