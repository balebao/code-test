#include <iostream>
using namespace std;

int main()
{
    int diem1, diem2, diem3; // Ba diem so
    double trungBinh; // Diem trung binh
    char lapTiep; // De luu tru lua chon Y hoac N

    do
    {
        // Nhap ba diem so.
        cout << "Nhap 3 diem va toi se tinh diem trung binh cua chung:\n ";
        cin >> diem1 >> diem2 >> diem3;

        // Tinh va hien thi diem trung binh.
        trungBinh = (diem1 + diem2 + diem3) / 3.0;
        cout << "Diem trung binh la " << trungBinh << ".\n";

        // Nguoi dung co muon tinh diem trung binh cho mot bo diem khac khong?
        cout << "Ban co muon tinh diem trung binh cho mot bo diem khac khong? (C/K) ";
        cin >> lapTiep;
    } while (lapTiep == 'C' || lapTiep == 'c');

    return 0;
}
