#include <iostream>
#include <vector>

class Sap {
protected:
    int soThuTu;
    float dienTich;

public:
    Sap(int stt, float dt) : soThuTu(stt), dienTich(dt) {}

    virtual float TinhTienThue() const {
        return 40000000 * dienTich; // Đơn giá thuê * diện tích
    }

    virtual float TinhThueDoanhThu() const = 0;

    virtual ~Sap() {}
};

class SapThucPham : public Sap {
private:
    float tienDichVuDongLanh;

public:
    SapThucPham(int stt, float dt, float tienDL) : Sap(stt, dt), tienDichVuDongLanh(tienDL) {}

    float TinhThueDoanhThu() const override {
        return 0.05 * TinhTienThue(); // Thuế sạp thực phẩm là 5%
    }

    float TinhTienDichVuDongLanh() const {
        return tienDichVuDongLanh;
    }
};

class SapQuanAo : public Sap {
public:
    SapQuanAo(int stt, float dt) : Sap(stt, dt) {}

    float TinhThueDoanhThu() const override {
        return 0.1 * TinhTienThue(); // Thuế sạp quần áo là 10%
    }
};

class SapTrangSuc : public Sap {
public:
    SapTrangSuc(int stt, float dt) : Sap(stt, dt) {}

    float TinhThueDoanhThu() const override {
        if (TinhTienThue() < 100000000) {
            return 0.2 * TinhTienThue(); // Phần doanh thu < 100 triệu: thuế 20%
        } else {
            return 0.3 * TinhTienThue(); // Phần doanh thu >= 100 triệu: thuế 30%
        }
    }
};

class QuanLyCho {
private:
    std::vector<Sap*> danhSachSap;

public:
    void NhapThongTin() {
        int n;
        std::cout << "Nhap so luong sap duoc thue: ";
        std::cin >> n;

        for (int i = 0; i < n; i++) {
            int loaiSap;
            std::cout << "Chon loai sap (1: Thuc pham, 2: Quan ao, 3: Trang suc): ";
            std::cin >> loaiSap;

            Sap* sap = nullptr;
            int soThuTu;
            float dienTich;

            std::cout << "Nhap so thu tu sap: ";
            std::cin >> soThuTu;
            std::cout << "Nhap dien tich sap: ";
            std::cin >> dienTich;

            switch (loaiSap) {
                case 1:
                    float tienDichVuDongLanh;
                    std::cout << "Nhap tien dich vu dong lanh: ";
                    std::cin >> tienDichVuDongLanh;
                    sap = new SapThucPham(soThuTu, dienTich, tienDichVuDongLanh);
                    break;
                case 2:
                    sap = new SapQuanAo(soThuTu, dienTich);
                    break;
                case 3:
                    sap = new SapTrangSuc(soThuTu, dienTich);
                    break;
                default:
                    std::cout << "Loai sap khong hop le. Nhap lai!" << std::endl;
                    i--;
                    continue;
            }

            danhSachSap.push_back(sap);
        }
    }

    float TinhTongTien() const {
        float tongTien = 0;
        for (const auto& sap : danhSachSap) {
            tongTien += sap->TinhTienThue() + sap->TinhThueDoanhThu();
            if (dynamic_cast<SapThucPham*>(sap)) {
                // Nếu là sạp thực phẩm, thêm tiền dịch vu dong lanh
                tongTien += dynamic_cast<SapThucPham*>(sap)->TinhTienDichVuDongLanh();
            }
        }
        return tongTien;
    }

    ~QuanLyCho() {
        for (const auto& sap : danhSachSap) {
            delete sap;
        }
    }
};

int main() {
    QuanLyCho ql;
    ql.NhapThongTin();
    std::cout << "Tong tien cac sap phai dong: " << ql.TinhTongTien() << std::endl;

    return 0;
}
