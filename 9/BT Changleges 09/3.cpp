#include <iostream>
#include <algorithm> // Để sắp xếp

// Nguyên mẫu hàm
void nhapDiem(int* diem, int kichThuoc);
void sapXepDiem(int* diem, int kichThuoc);
double tinhTrungBinh(const int* diem, int kichThuoc);

int main() {
    int kichThuoc;

    // Nhập số lượng điểm kiểm tra từ người dùng
    std::cout << "nhap so luong diem kt: ";
    std::cin >> kichThuoc;

    // Kiểm tra kích thước hợp lệ
    if (kichThuoc <= 0) {
        std::cout << "kich thuoc ti le ." << std::endl;
        return 1;
    }

    // Cấp phát động một mảng để chứa điểm kiểm tra
    int* diemkiemtra = new int[kichThuoc];

    // Nhập điểm kiểm tra
    nhapDiem(diemkiemtra, kichThuoc);

    // Sắp xếp điểm kiểm tra
    sapXepDiem(diemkiemtra, kichThuoc);

    // Tính trung bình loại bỏ điểm thấp nhất
    double trungBinh = tinhTrungBinh(diemkiemtra + 1, kichThuoc - 1);

    // Hiển thị kết quả
    std::cout << "\ntrung binh diem(bo diem thap nhat): " << trungBinh << std::endl;

    // Giải phóng bộ nhớ động đã cấp phát
    delete[] diemkiemtra;

    return 0;
}

void nhapDiem(int* diem, int kichThuoc) {
    std::cout << "nhap diem kiem tra(chi nhap so kh am):" << std::endl;
    for (int i = 0; i < kichThuoc; ++i) {
        do {
            std::cout << "d2iem " << i + 1 << ": ";
            std::cin >> diem[i];

            // Kiểm tra hợp lệ: không chấp nhận số âm
            if (diem[i] < 0) {
                std::cout << "Nhap kh hop le (vui long nhap so kh am)" << std::endl;
            }
        } while (diem[i] < 0);
    }
}

void sapXepDiem(int* diem, int kichThuoc) {
    // Sử dụng hàm sắp xếp từ thư viện algorithm
    std::sort(diem, diem + kichThuoc);
}

double tinhTrungBinh(const int* diem, int kichThuoc) {
    double tong = 0;
    for (int i = 0; i < kichThuoc; ++i) {
        tong += diem[i];
    }
    return (kichThuoc == 0) ? 0 : (tong / kichThuoc);
}
