#include <iostream>
#include <string>
using namespace std;

int main() {
    const int soLoaiSALAT = 5;
    string tenSalsa[soLoaiSALAT] = {"Dry”, “Medium”, “Sweet”, “Hot”, “Intense"};
    int soLuongLo[soLoaiSALAT] = {0};

    // Nhập số lượng lo bán cho từng loại salsa và kiểm tra xác thực đầu vào.
    for (int index = 0; index < soLoaiSALAT; index++) {
        do {
            cout << "\nnhap so luong lo ban " << index  << ": ";
            cin >> soLuongLo[index];
            if (soLuongLo[index] < 0) {
                cout << "so luong kh the am vui lòng nhap lai.\n";
            }
        } while (soLuongLo[index] < 0);
    }

    // Tính tổng doanh số bán hàng.
    int tongDoanhSo = 0;
    for (int i = 0; i < soLoaiSALAT; i++) {
        tongDoanhSo += soLuongLo[i];
    }

    // Tìm loại salsa có doanh số bán hàng cao nhất và thấp nhất.
    int maxDoanhSo = soLuongLo[0];
    int minDoanhSo = soLuongLo[0];
    string loaiSalsaMax = tenSalsa[0];
    string loaiSalsaMin = tenSalsa[0];

    for (int i = 1; i < soLoaiSALAT; i++) {
        if (soLuongLo[i] > maxDoanhSo) {
            maxDoanhSo = soLuongLo[i];
            loaiSalsaMax = tenSalsa[i];
        }
        if (soLuongLo[i] < minDoanhSo) {
            minDoanhSo = soLuongLo[i];
            loaiSalsaMin = tenSalsa[i];
        }
    }

    // Hiển thị báo cáo.
    cout << "\nbao cao doanh thu ban hang:\n";
    for (int i = 0; i < soLoaiSALAT; i++) {
        cout << tenSalsa[i] << ": " << soLuongLo[i] << " lo\n";
    }
    cout << "tong doanh thu: " << tongDoanhSo << " lo\n";
    cout << "san pham ban chay nhat: " << loaiSalsaMax << " (" << maxDoanhSo << " lo)\n";
    cout << "san pham ban cham nhat: " << loaiSalsaMin << " (" << minDoanhSo << " lo)\n";

    return 0;
}
