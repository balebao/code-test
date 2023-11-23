#include <iostream>

int main() {
    const double tang1Nam = 1.5;  // Tốc độ tăng mực nước biển (mm/năm)
    const int soNam = 25;      // Số năm

    // In tiêu đề cho bảng
    std::cout << "Year\tOcean Rise (mm)" << std::endl;

    // Tính và in ra mực nước biển tăng lên mỗi năm
    for (int year = 1; year <= soNam; year++) {
        double totalRise = tang1Nam * year;
        std::cout << year << "\t" << totalRise << std::endl;
    }

    return 0;
}
