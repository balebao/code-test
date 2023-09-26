#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string ten1, ten2, ten3;

    // Mở tệp đầu ra.
    outputFile.open("BanBe.txt");

    // Nhập tên của ba người bạn.
    cout << "nhap ten ba ng bn\n";
    cout << "ng thu nhat: ";
    cin >> ten1;
    cout << "thu hai: ";
    cin >> ten2;
    cout << " thu ba: ";
    cin >> ten3;

    // Ghi các tên vào tệp.
    outputFile << ten1 << endl;
    outputFile << ten2 << endl;
    outputFile << ten3 << endl;
    cout << "cac ten da dc luu vao tep.\n";

    // Đóng tệp
    outputFile.close();
    return 0;
}
