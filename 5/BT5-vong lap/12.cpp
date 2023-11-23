#include <iostream>
using namespace std;

int main()
{
    int game = 1;    // Đếm số trận đấu
    int points;      // Để lưu trữ số điểm
    int total = 0;   // Biến tích luỹ

    cout << "Nhap so diem ma doi cua ban da kiem duoc\n";
    cout << "trong mua giai, sau do nhap -1 khi hoan thanh.\n\n";
    cout << "Nhap so diem cho tran dau " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;
        game++;
        cout << "Nhap so diem cho tran dau " << game << ": ";
        cin >> points;
    }

    cout << "\nTong so diem la " << total << endl;
    return 0;
}

