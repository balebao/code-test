#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string ten;

    inputFile.open("BanBe.txt");
    cout << "dang doc du lieu tu tep.\n";

    inputFile >> ten; // Đọc tên thứ nhất từ tệp
    cout << ten << endl; // Hiển thị tên thứ nhất

    inputFile >> ten; // Đọc tên thứ hai từ tệp
    cout << ten << endl; // Hiển thị tên thứ hai

    inputFile >> ten; // Đọc tên thứ ba từ tệp
    cout << ten << endl; // Hiển thị tên thứ ba

    inputFile.close(); // Đóng tệp lại
    return 0;
}
