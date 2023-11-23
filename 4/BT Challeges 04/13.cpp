#include <iostream>
using namespace std;

int main() {
    int soLuongSach;
    int diem = 0;

    cout << "nhap so luong sach da mua: ";
    cin >> soLuongSach;

    if (soLuongSach == 0) {
        diem = 0;
    } else if (soLuongSach == 1) {
        diem = 5;
    } else if (soLuongSach == 2) {
        diem = 15;
    } else if (soLuongSach == 3) {
        diem = 30;
    } else if (soLuongSach >= 4) {
        diem = 60;
    }

    cout << "so diem dc trao " << diem << " diem" << endl;

    return 0;
}
