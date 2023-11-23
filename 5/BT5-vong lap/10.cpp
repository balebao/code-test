#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hằng số cho các tốc độ
    const int START_KPH = 60, // Tốc độ bắt đầu
              END_KPH = 130,   // Tốc độ kết thúc
              INCREMENT = 10;  // Tốc độ tăng

    // Hằng số cho hệ số chuyển đổi
    const double CONVERSION_FACTOR = 0.6214;

    // Biến
    int kph;    // Để lưu trữ tốc độ trong kph
    double mph; // Để lưu trữ tốc độ trong mph

    // Cài đặt định dạng hiển thị số
    cout << fixed << showpoint << setprecision(1);

    // Hiển thị tiêu đề bảng.
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hiển thị các tốc độ.
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        // Tính toán mph
        mph = kph * CONVERSION_FACTOR;

        // Hiển thị tốc độ trong kph và mph.
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
