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
  return congSuat()* m_tgian;
}
 float MayLoc::congSuat() {

}
class MayLyTam: public MayLoc {
private:
float m_cs;
protected:
float congSuat();
public:
MayLyTam(float cs, float t);
};
MayLyTam::MayLyTam(float cs, float t) {
this->m_cs = cs;
this->setTgian = t; /*1*/
}
float MayLoc::congSuat() {
return this->cs;
}
void main() {
MayLoc *pm = new MayLoc();
if (pm->congSuat() < 5) /*2*/
{
MayLyTam ml(81.9, 10);
pm = &ml; /*3*/
cout << "Luong nuoc = "
<< pm->tinhLuongNuoc();
}
delete pm; /*4*/
}