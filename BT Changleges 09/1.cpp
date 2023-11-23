#include <iostream>

int* capPhatMangSoNguyen(int kichThuoc) {
    // Cấp phát động một mảng số nguyên
    int* mangMoi = new int[kichThuoc];

    return mangMoi;
}

int main() {
    int kichThuoc;

    // Nhập số lượng phần tử từ người dùng
    std::cout << "nhap so luong phan tu : ";
    std::cin >> kichThuoc;

    // Gọi hàm tạo mảng
    int* mangCuaToi = capPhatMangSoNguyen(kichThuoc);

    // Hiển thị địa chỉ của mảng đã cấp phát
    std::cout << "mang da cap phat tai dia chi  " << mangCuaToi << std::endl;

    // Đừng quên giải phóng bộ nhớ đã cấp phát khi hoàn thành
    delete[] mangCuaToi;

    return 0;
}
