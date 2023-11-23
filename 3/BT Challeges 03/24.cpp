#include <iostream>
#include <string>

using namespace std;

int main() {
    // Khai báo các biến để lưu thông tin người dùng
    string ten, thanPho, truong, ngheNghiep, loaiThu, thuCung;
    int tuoi;

    // nhập thông tin cá nhân
    cout << "nhap ten: ";
    getline(cin, ten);

    cout << "nhap tuoi: ";
    cin >> tuoi;
    cin.ignore(); // Xóa bộ đệm để nhập chuỗi tiếp theo

    cout << "ten tp: ";
    getline(cin, thanPho);

    cout << "ten truong: ";
    getline(cin, truong);

    cout << "nghe nghiep: ";
    getline(cin, ngheNghiep);

    cout << "loai dong vat: ";
    getline(cin, loaiThu);

    cout << "ten thu cung: ";
    getline(cin, thuCung);

    // Hiển thị câu chuyện sử dụng thông tin cá nhân của người dùng
    cout << "co mot ng ten la " << ten << " song o " << thanPho << ". ";
    cout << "Khi " << ten << " " << tuoi << " tuoi, anh hoc tai truong" << truong << ". ";
    cout << ten << " tot nghiep va di lam" << ngheNghiep << ". ";
    cout << "sau do" << ten << " nhan nuoi con pet" << loaiThu << "ten la" << thuCung << ". ";
    cout << "ho hp mai mai!" << endl;

    return 0;
}