#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents;  // So luong hoc sinh
    int numTests;     // So luong bai kiem tra moi hoc sinh
    double total;     // Bien tich luy tong so diem
    double average;   // Diem trung binh cua bai kiem tra

    // Cai dat dinh dang hien thi so
    cout << fixed << showpoint << setprecision(1);

    // Nhap so luong hoc sinh.
    cout << "Chuong trinh tinh diem trung binh cua bai kiem tra.\n";
    cout << "Cho bao nhieu hoc sinh? ";
    cin >> numStudents;

    // Nhap so luong bai kiem tra cho moi hoc sinh.
    cout << "Moi hoc sinh co bao nhieu bai kiem tra? ";
    cin >> numTests;

    // Tinh diem trung binh cua tung hoc sinh.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0; // Khoi tao bien tich luy ve 0.
        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Nhap diem bai kiem tra " << test << " cho ";
            cout << "hoc sinh " << student << ": ";
            cin >> score;
            total += score;
        }
        average = total / numTests;
        cout << "Diem trung binh cua hoc sinh " << student;
        cout << " la " << average << ".\n\n";
    }
    return 0;
}
    