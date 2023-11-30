#include <iostream>
using namespace std;

class MayLoc {
public:
    virtual void nhap() = 0;
    virtual float tinhLuongNuoc() const = 0;
    virtual long tinhChiPhi() const = 0;
    virtual ~MayLoc() {}
};

class MayLyTam : public MayLoc {
private:
    float _thoiGian;
    long _luongHoaChat;

public:
    MayLyTam() : _thoiGian(0), _luongHoaChat(0) {}

    void nhap() override {
        cout << "Nhap thoi gian hoat dong:";
        cin >> _thoiGian;
        cout << "Nhap Luong hoa chat:";
        cin >> _luongHoaChat;
    }

    float tinhLuongNuoc() const override {
        // Thực hiện tính toán dựa trên thời gian và lượng hoá chất
        return _thoiGian * (_luongHoaChat / 100.0);
    }

    long tinhChiPhi() const override {
        // Thực hiện tính toán dựa trên lượng hoá chất
        return _luongHoaChat * 10000;
    }
};

class MayXucTac : public MayLoc {
private:
    float _thoiGian;
    int _luongHoaChat;
    float _congSuatLoc;

public:
    MayXucTac() : _thoiGian(0), _luongHoaChat(0), _congSuatLoc(0) {}

    void nhap() override {
        cout << "Nhap thoi gian hoat dong:";
        cin >> _thoiGian;
        cout << "Nhap Luong hoa chat:";
        cin >> _luongHoaChat;
        cout << "Nhap cong suat loc cua may:";
        cin >> _congSuatLoc;
    }

    float tinhLuongNuoc() const override {
        if (_thoiGian >= 10) {
            return _congSuatLoc * (_luongHoaChat / 100.0) / (_thoiGian / 10);
        } else {
            return _congSuatLoc * (_luongHoaChat / 100.0);
        }
    }

    long tinhChiPhi() const override {
        return _luongHoaChat * 10000;
    }
};

class DanhSachMayLoc {
private:
    MayLoc** _danhSach;
    int _N;

public:
    DanhSachMayLoc() : _N(0), _danhSach(nullptr) {}

    ~DanhSachMayLoc() {
        for (int i = 0; i < _N; i++) {
            delete _danhSach[i];
        }
        delete[] _danhSach;
    }

    void nhap() {
        cout << "Nhap luong may:";
        cin >> _N;

        _danhSach = new MayLoc*[_N];
        for (int i = 0; i < _N; i++) {
            int choice = 0;
            cout << "Nhap loai may: 1 = may ly tam, 2 = may xuc tac:\n";
            cin >> choice;

            if (choice == 1) {
                _danhSach[i] = new MayLyTam();
            } else {
                _danhSach[i] = new MayXucTac();
            }

            _danhSach[i]->nhap();
        }
    }

    float tinhLuongNuoc() const {
        float sum = 0.0;
        for (int i = 0; i < _N; i++) {
            sum += _danhSach[i]->tinhLuongNuoc();
        }
        return sum;
    }

    long tinhChiPhi() const {
        long sum = 0;
        for (int i = 0; i < _N; i++) {
            sum += _danhSach[i]->tinhChiPhi();
        }
        return sum;
    }
};

class Ao {
private:
    int _M;
    DanhSachMayLoc _ds;

public:
    Ao() : _M(0) {}

    void nhap() {
        cout << "Nhap luong nuoc: ";
        cin >> _M;
        cout << "Nhap danh sach:\n";
        _ds.nhap();
    }

    bool AoDuocLocHetKhong() const {
        return _M >= _ds.tinhLuongNuoc();
    }

    long tongChiPhi() const {
        return _ds.tinhChiPhi();
    }

    ~Ao() {}
};
int main() {
    Ao ao;
    ao.nhap();

    cout << "Chi phi tong cong: " << ao.tongChiPhi() << endl;
    cout << (ao.AoDuocLocHetKhong() ? "Ao duoc loc het nuoc" : "Ao khong duoc loc het nuoc") << endl;

    return 0;
}
