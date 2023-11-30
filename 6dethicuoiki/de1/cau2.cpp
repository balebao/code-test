#include <iostream>
using namespace std;

class MayLoc {
private:
    float m_tgian;

public:
    void setTgian(float tgian) {
        m_tgian = tgian;
    }

    float getThoiGian() const {
        return m_tgian;
    }
};

class MayXucTac : public MayLoc {
private:
    int _luongHoaChat;
    float _congSuatLoc;

public:
    static long DON_GIA_HOA_CHAT;
    static long DON_GIA_THUE;

    void nhap() {
        float thoiGian = 0;
        cout << "Nhap thoi gian hoat dong:";
        cin >> thoiGian;
        setTgian(thoiGian);
        cout << "Nhap Luong hoa chat:";
        cin >> _luongHoaChat;
        cout << "Nhap cong suat loc cua may:";
        cin >> _congSuatLoc;
    }

    float CongSuatThucTe() const {
        if (getThoiGian() >= 10) {
            return _congSuatLoc * (_luongHoaChat / 100) / (getThoiGian() / 10);
        } else {
            return _congSuatLoc * (_luongHoaChat / 100);
        }
    }

    long tinhChoPhiThueMoiMay() const {
        return DON_GIA_THUE * static_cast<long>(getThoiGian());
    }

    long tinhChiPhi() const {
        return tinhChoPhiThueMoiMay() + _luongHoaChat * 10000;
    }

    float tinhLuongNuoc() const {
        return getThoiGian() * CongSuatThucTe();
    }
};

long MayXucTac::DON_GIA_HOA_CHAT = 10000;
long MayXucTac::DON_GIA_THUE = 80000;

int main() {
    MayXucTac mayXucTac;
    mayXucTac.nhap();

    cout << "Chi phi thue: " << mayXucTac.tinhChoPhiThueMoiMay() << endl;
    cout << "Chi phi tong cong: " << mayXucTac.tinhChiPhi() << endl;
    cout << "Luong nuoc: " << mayXucTac.tinhLuongNuoc() << endl;

    return 0;
}
