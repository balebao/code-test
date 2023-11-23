#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;           // So ngay
    double total = 0.0; // Bien tong, khoi tao voi gia tri 0

    // Nhap so ngay.
    cout << "Ban co bao nhieu ngay co so lieu ban hang? ";
    cin >> days;

    // Nhap so lieu ban hang cho moi ngay va tich luy tong.
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Nhap so lieu ban hang cho ngay " << count << ": ";
        cin >> sales;
        total += sales; // Tich luy tong
    }

    // Hien thi tong so lieu ban hang.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tong so lieu ban hang la $" << total << endl;

    return 0;
}
