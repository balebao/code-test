#include <iostream>
using namespace std;
int main() {
    // Nhập số tiền ngân sách dự kiến từ người dùng
    double budget;
    cout << "nhap so tien du kien thang nay: ";
    cin >> budget;
    // Khởi tạo biến tổng số tiền đã chi
    double totalExpenses = 0.0;
    // Sử dụng vòng lặp để nhập các khoản chi tiêu và tính tổng
    while (true) {
        double expense;
        cout << "nhap so tien chi hoac nhap  enter de ket thuc: ";
        cin >> expense;
        if (cin.fail()) {
            // Kiểm tra nếu người dùng nhập không phải là số
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "nhap khong hop le " << endl;
            continue;
        }   

        if (expense == 0.0) {
            break;  // Kết thúc vòng lặp nếu người dùng nhập 0 hoặc số âm
        }

        totalExpenses += expense;
    }

    // Tính số tiền còn lại so với ngân sách dự kiến
    double difference = budget - totalExpenses;

    // Hiển thị kết quả
    if (difference >= 0) {
        cout << "Ban da tieu " << totalExpenses << " trong ngan sach du kien ban con lai " << difference << "." << endl;
    } else {
        cout << "bn da tieu qua nhieu ngan sach " << totalExpenses << ". Ban da vuot qua " << abs(difference) << "." << endl;
    }

    return 0;
}
