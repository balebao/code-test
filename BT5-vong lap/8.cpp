#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Cac hang so cho cac lua chon trong menu
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;
    // Cac hang so cho muc phi thanh vien
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;
    int choice; // Lua chon trong menu
    int months; // So thang
    double charges; // Phi hang thang

    // Cai dat dinh dang hien thi so
    cout << fixed << showpoint << setprecision(2);
    do {
     // Hien thi menu.
        cout << "\n\t\tMenu Thanh Vien Cau Lac Bo Suc Khoe\n\n"
             << "1. Thanh Vien Nguoi Lon\n"
             << "2. Thanh Vien Tre Em\n"
             << "3. Thanh Vien Nguoi Cao Tuoi\n"
             << "4. Thoat Chuong Trinh\n\n"
             << "Nhap lua chon cua ban: ";
        cin >> choice;
        // Xac thuc lua chon trong menu.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)  {
            cout << "Vui long nhap lua chon hop le: ";
            cin >> choice;
        }
        // Xu ly lua chon cua nguoi dung.
        if (choice != QUIT_CHOICE) {
            // Nhap so thang.
            cout << "Thanh vien se tham gia bao nhieu thang? ";
            cin >> months;
            // Xu ly dua tren lua chon cua nguoi dung.
            switch (choice)  {
            case ADULT_CHOICE:
                charges = months * ADULT;
                break;
            case CHILD_CHOICE:
                charges = months * CHILD;
                break;
            case SENIOR_CHOICE:
                charges = months * SENIOR;
                break;
            }
            // Hien thi phi hang thang.
            cout << "Tong phi la $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);
    return 0;
}
