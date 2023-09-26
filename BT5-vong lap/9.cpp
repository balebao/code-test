#include <iostream>
using namespace std;

int main()
{
    int minNumber, maxNumber;

    cout << "Toi se hien thi bang cac so va binh phuong cua chung.\n";
    cout << "Nhap so bat dau: ";
    cin >> minNumber;
    cout << "Nhap so ket thuc: ";
    cin >> maxNumber;

    cout << "So\tBinh phuong\n";
    cout << "----------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
    {
        cout << num << "\t" << num * num << endl;
    }

    return 0;
}
