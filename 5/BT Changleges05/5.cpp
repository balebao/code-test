#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double phibandau = 2500.0;  
    const double tiLeTang = 0.04;  // Tỷ lệ tăng hàng năm (4% dưới dạng thập phân)
    const int soNamDuDoan= 6;  // Số năm dự đoán

    // In tiêu đề cho bảng
    cout << "Nam-Phi du kien" << endl;

    // Khởi tạo phí hiện tại bằng phí ban đầu
    double phiHienTai = phibandau;

    // Sử dụng một vòng lặp để tính toán và in ra phí dự kiến cho sáu năm tới
    for (int year = 1; year <= soNamDuDoan; year++) {
        cout << year << " " << fixed << setprecision(2) << phiHienTai<< "$" << endl;
        phiHienTai += phiHienTai * tiLeTang;  // Tính phí mới cho năm tiếp theo
    }

    return 0;
}
