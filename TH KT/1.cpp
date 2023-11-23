#include <iostream>
#include<string>
using namespace std;

class NhanVien{
private: string name;
         string DayOfBirth;
   public: 
   string getName(){
    return name;
   }
   string getDayOfBirth(){
    return DayOfBirth;
   } 
   void setName(string name){
    this -> name = name;
   }
   void setDayOfBirth(string DayOfBirth){
    this -> DayOfBirth = DayOfBirth;
   }
};
 class NhanVienSX : public NhanVien{
    private:
    float luongCoBan;
    int soSanPham;
    double luong;
    public:
    float luongCoBan(){
        return luongCoBan;
    }
    void getLuongCoBan(float luongCoBan){
        this -> luongCoBan = luongCoBan;
    }
    int soSanPham(){
        return soSanPham;
    }
    void getSoSanPham(int soSanPham){
        this -> soSanPham = soSanPham;
    }
    //tinh luong
    double luong(){
        luong  = luongCoBan + soSanPham * 5000;
        return  luong;
    }
    void getLuongCoBan(double luong){
        this -> luong = luong;
    }
 };
 class NhanVienVP : public NhanVien{
    private:
    float soNgayLamVC;
    double luong;
    public:
    int soNgayLamVC(){
        return soNgayLamVC;
    } 
    void getSoNgayLamVC(float soNgayLamVC){
        this -> soNgayLamVC = soNgayLamVC;
    }
    //tinh luong
    double luong(){
        luong = soNgayLamVC * 100000;
        return luong ;
    }
 };
 int main(){
    
 }
 