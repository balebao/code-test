#include <iostream>
#include <cmath> // Để sử dụng hàm sin, cos, và tan
#include <iomanip> // Để định dạng đầu ra

using namespace std;

int main() {
    double goc, sinValue, cosValue, tanValue;

    // Yêu cầu nhập góc (radians)
    cout << "nhap goc (radians): ";
    cin >> goc;

    // Tính giá trị sin, cos, và tan
    sinValue = sin(goc);
    cosValue = cos(goc);
    tanValue = tan(goc);

    // Hiển thị kết quả với định dạng đầu ra
    cout << fixed << setprecision(4); // Định dạng đầu ra với bốn chữ số thập phân
    cout << "Sine: " << sinValue << endl;
    cout << "Cosine: " << cosValue << endl;
    cout << "Tangent: " << tanValue << endl;

    return 0;
}