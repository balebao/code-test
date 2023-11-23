#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int szeMang = 100; // Kích thước mảng
    int numbers[szeMang]; // Mảng gồm 100 phần tử

    int count = 0; // Biến đếm vòng lặp
    ifstream inputFile; // Đối tượng luồng tệp đầu vào

    inputFile.open("numbers.txt"); // Mở tệp.

    // Đọc các số từ tệp vào mảng.
    // Sau khi vòng lặp này thực hiện, biến count sẽ chứa
    // số lượng giá trị được lưu trong mảng.
    while (count < szeMang && inputFile >> numbers[count])
        count++;

    // Đóng tệp.
    inputFile.close();

    // Hiển thị các số đã đọc.
    cout << "Cac so la: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;

    return 0;
}
