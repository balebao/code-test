#include <iostream>
#include <iomanip>
using namespace std;

// Nguyên mẫu hàm
void nhapDiemThi(double[], int);
double tinhTong(const double[], int);
double timDiemThapNhat(const double[], int);

int main()
{
    const int size = 4; // Kích thước mảng
    double diemThi[size]; // Mảng chứa điểm thi
    double tongDiem, // Tổng điểm
           diemThapNhat, // Điểm thi thấp nhất
           diemTrungBinh; // Điểm trung bình

    // Cài đặt định dạng hiển thị số
    cout << fixed << showpoint << setprecision(1);

    // Nhập điểm thi từ người dùng
    nhapDiemThi(diemThi, size);

    // Tính tổng điểm
    tongDiem = tinhTong(diemThi, size);

    // Tìm điểm thi thấp nhất
    diemThapNhat = timDiemThapNhat(diemThi, size);

    // Trừ điểm thi thấp nhất khỏi tổng điểm
    tongDiem -= diemThapNhat;

    // Tính điểm trung bình. Chia cho 3 vì đã bỏ điểm thấp nhất.
    diemTrungBinh = tongDiem / (size - 1);

    // Hiển thị điểm trung bình
    cout << "diem trung binh khi bo diem thap nhat " << diemTrungBinh << ".\n";

    return 0;
}

// Định nghĩa hàm nhapDiemThi
void nhapDiemThi(double diem[], int kichThuoc)
{
    cout << "nhap cac diem tu nguoi dung:\n";
    for (int i = 0; i < kichThuoc; i++)
    {
        cout << "diem thi #" << (i + 1) << ": ";
        cin >> diem[i];
    }
}

// Định nghĩa hàm tinhTong
double tinhTong(const double diem[], int kichThuoc)
{
    double tong = 0;
    for (int i = 0; i < kichThuoc; i++)
    {
        tong += diem[i];
    }
    return tong;
}

// Định nghĩa hàm timDiemThapNhat
double timDiemThapNhat(const double diem[], int kichThuoc)
{
    double min = diem[0];
    for (int i = 1; i < kichThuoc; i++)
    {
        if (diem[i] < min)
        {
            min = diem[i];
        }
    }
    return min;
}
