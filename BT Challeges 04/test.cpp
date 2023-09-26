#include <iostream>
#include <string>
using namespace std;

int main() {
    string mau1, mau2;

    // Nhập tên của hai màu cơ bản
    cout << "Nhập tên của màu cơ bản thứ nhất (red, blue, yellow): ";
    cin >> mau1;

    cout << "Nhập tên của màu cơ bản thứ hai (red, blue, yellow): ";
    cin >> mau2;

    // Kiểm tra các màu nhập vào và hiển thị màu kết hợp tương ứng
    if ((mau1 == "red" && mau2 == "blue") || (mau1 == "blue" && mau2 == "red")) {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: purple" << endl;
    } else if ((mau1 == "red" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "red")) {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: orange" << endl;
    } else if ((mau1 == "blue" && mau2 == "yellow") || (mau1 == "yellow" && mau2 == "blue")) {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: green" << endl;
    } else if (mau1 == "red" && mau2 == "red") {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: red" << endl;
    } else if (mau1 == "blue" && mau2 == "blue") {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: blue" << endl;
    } else if (mau1 == "yellow" && mau2 == "yellow") {
        cout << "Kết quả khi pha màu " << mau1 << " và " << mau2 << " là: yellow" << endl;
    } else {
        cout << "Không thể pha màu từ các màu bạn đã nhập." << endl;
    }

    return 0;
}
