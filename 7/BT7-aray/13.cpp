#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
const int soNV = 5; // Number of employees
 int hours[soNV]; // mảng chứa số giờ làm việc
 double payrate; //tỉ lệ lương theo giờ
 double grossPay; // luu trũ tổng lương

 // nhap so giơ lam việc
 cout << "Enter the hours worked by ";
 cout << soNV << " employees who all\n";
 cout << "earn the same hourly rate.\n";
 for (int index = 0; index < soNV; index++)
 {
 cout << "Employee #" << (index + 1) << ": ";
 cin >> hours[index];
 }

 // nhap ti lệ lương theo giờ
 cout << "Enter the hourly pay rate for all the employees: ";
 cin >> payrate;

 //hien thị tổng lương
 cout << "Here is the gross pay for each employee:\n";
 cout << fixed << showpoint << setprecision(2);
 for (int index = 0; index < soNV; index++)
 {
 grossPay = hours[index] * payrate;
 cout << "Employee #" << (index + 1);
 cout << ": $" << grossPay << endl;
 }
 return 0;
}