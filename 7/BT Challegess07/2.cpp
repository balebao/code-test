#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SoThang = 12;
    double mua[SoThang];
    string thang[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    // Nhập lượng mưa tổng cộng cho từng tháng.
    for (int i = 0; i < SoThang; i++) {
        cout << "nhap tong luong mua " << thang[i] << ": ";
        cin >> mua[i];
    }

    // Tính tổng lượng mưa trong năm.
    double muaTrongNam = 0.0;
    for (int i = 0; i < SoThang; i++) {
        muaTrongNam += mua[i];
    }

    // Tính lượng mưa trung bình hàng tháng.
    double muaTrungBinh = muaTrongNam / SoThang;

    // Tìm tháng có lượng mưa cao nhất và thấp nhất.
    double muaCaoNhat = mua[0];
    double muaThapNhat = mua[0];
    string thangCaoNhat = thang[0];
    string thangThapNhat = thang[0];

    for (int i = 1; i < SoThang; i++) {
        if (mua[i] > muaCaoNhat) {
            muaCaoNhat = mua[i];
            thangCaoNhat = thang[i];
        }
        if (mua[i] < muaThapNhat) {
            muaThapNhat = mua[i];
            thangThapNhat = thang[i];
        }
    }

    // Hiển thị kết quả.
    cout << "tong luog mua nam: " << muaTrongNam << " inches" << endl;
    cout << "luong mua tb thang: " << muaTrungBinh << " inches" << endl;
    cout << "thang mua nhieu nhat: " << thangCaoNhat << " (" << muaCaoNhat << " inches)" << endl;
    cout << "thang mua it nhat: " << thangThapNhat << " (" << muaThapNhat << " inches)" << endl;

    return 0;
}
