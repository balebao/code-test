#include <iostream>
using namespace std;

class MayLoc {
private:
    float m_tgian;

protected:
    virtual float congSuat();
    void setTgian(float t);

public:
    MayLoc();
    float tinhLuongNuoc();
};

MayLoc::MayLoc() {
    this->m_tgian = 0;
}

void MayLoc::setTgian(float t) {
    this->m_tgian = t;
}

float MayLoc::tinhLuongNuoc() {
    return congSuat() * m_tgian;
}

float MayLoc::congSuat() {
    // Phương thức này có thể được triển khai trong các lớp con
    // Nếu không, lớp con có thể định nghĩa lại phương thức này.
    return 0.0;
}

class MayLyTam : public MayLoc {
private:
    float m_cs;

protected:
    float congSuat();

public:
    MayLyTam(float cs, float t);
};

MayLyTam::MayLyTam(float cs, float t) {
    this->m_cs = cs;
    setTgian(t); /* Sử dụng phương thức setTgian thay vì trực tiếp gán giá trị */
}

float MayLyTam::congSuat() {
    return this->m_cs;
}

int main() {
    MayLoc* pm = new MayLoc();
    if (pm->congSuat() < 5) {
        MayLyTam ml(81.9, 10);
        pm = &ml;
        cout << "Luong nuoc = " << pm->tinhLuongNuoc() << endl;
    }
    delete pm;
    return 0;
}
