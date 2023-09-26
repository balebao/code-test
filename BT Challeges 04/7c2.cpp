#include <iostream>
using namespace std;
int main() {
    int soGiay;

    // Nhập số giây từ người dùng
    cout << "nhap so giay ";
    cin >> soGiay;

    if (soGiay >= 86400) {
        // Nếu số giây lớn hơn hoặc bằng 86,400, tính số ngày
        int soNgay = soGiay / 86400;
        cout << "thoi gian tuong ung: " << soNgay << " ngay" << endl;
    } else if (soGiay >= 3600) {
        // Nếu số giây lớn hơn hoặc bằng 3,600, tính số giờ
        int soGio = soGiay / 3600;
        cout << "thoi gian tuong ung: " << soGio << " gio" << endl;
    } else if (soGiay >= 60) {
        // Nếu số giây lớn hơn hoặc bằng 60, tính số phút
        int soPhut = soGiay / 60;
        cout << "thoi gian tuong ung: " << soPhut << " phut" << endl;
    } else {
        // Nếu số giây nhỏ hơn 60, in trực tiếp số giây
        cout << "thoi gian tuong ung: " << soGiay << " giay" << endl;
    }

    return 0;
}
