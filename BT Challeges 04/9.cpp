#include <iostream>
using namespace std;

int main() {
    int oneCents, fiveCents, tenCents, twentyCents;
    
    // Nhập số lượng tiền xu từ người chơi
    cout << "nhap so luong dong xu 1 cent: ";
    cin >> oneCents;

    cout << "nhap so luong dong xu 5 cents: ";
    cin >> fiveCents;

    cout << "nhap so luong dong xu 10 cents: ";
    cin >> tenCents;

    cout << "nhap so luong dong xu 20 cents: ";
    cin >> twentyCents;

    // Tính tổng giá trị tiền
    double totalValue = oneCents * 0.01 + fiveCents * 0.05 + tenCents * 0.1 + twentyCents * 0.25;

    // Kiểm tra xem tổng giá trị có bằng một đô la hay không(100cents= 1$)
    if (totalValue == 100) {
        cout << "you won!" << endl;
    } else if (totalValue > 100) {
        cout << "so tien bn nhap nhieu hon" << endl;
    } else {
        cout << "so tien bn nhap it hon" << endl;
    }

    return 0;
    }
