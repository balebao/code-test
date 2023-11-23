#include <iostream>
using namespace std;

int main() {
    int soGiay;

    // Nhập số giây từ người dùng
    cout << "Nhap so giay: ";
    cin >> soGiay;
    
    int soPhut = soGiay / 60;
    int soGio = soGiay / 3600;
    int soNgay = soGiay / 86400;
    int giayDu;

    // Hiển thị kết quả
    if (soGiay > 86400) {
        giayDu = soGiay % 86400;
        cout << "thoi gian tuong ung " << soNgay << " ngay du " << giayDu << " giay"<< endl;
    }
     if (soGiay > 3600) {
        giayDu = soGiay % 3600;
        cout << "thoi gian tuong ung " << soGio << " gio du " << giayDu << " giay" << endl;
    }
     if (soGiay > 60) {
        giayDu = soGiay  % 60;
        cout << "thoi gian tuong ung " << soPhut << " phut du " << giayDu << " giay" << endl;
    }
    return 0;
}