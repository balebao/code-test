#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int sizeMang = 10; // Kích thước mảng
    int numbers[sizeMang]; // Mảng có 10 phần tử
    int count; // Biến đếm vòng lặp
    ofstream outputFile; // Đối tượng luồng tệp đầu ra

    // Lưu giá trị vào mảng.
    for (count = 0; count < sizeMang; count++)
        numbers[count] = count;

    // Mở tệp cho việc xuất ra.
    outputFile.open("SavedNumbers.txt");

    // Ghi nội dung của mảng vào tệp.
    for (count = 0; count <= sizeMang; count++)
        outputFile << numbers[count] << endl;

    // Đóng tệp.
    outputFile.close();

    // Đóng chương trình.
    cout << "cac so da dc luu vao tep.\n";
    return 0;
}
