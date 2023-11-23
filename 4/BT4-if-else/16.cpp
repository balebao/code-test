#include <iostream>
using namespace std;
int main(){
// thu nhập tối thiếu và số năm
  const double MinIncome = 35000.0;
  const int MinYear = 5;

 double income; //thu nhâp hằng năm 
 int years; // so nam làm công việc

 // nhaapk thu nhap hàng năm
 cout << "What is your annual income? ";
 cin >> income;

 // nhap số năm làm công việc
 cout << "How many years have you worked at "
 << "your current job? ";
 cin >> years;

 // xác định trình độ cho vay
 if (income >= MinIncome || years > MinYear)
 cout << "You qualify.\n";
 else
 {
 cout << "You must earn at least $"
 << MinIncome << " or have been "
 << "employed more than " << MinYear
 << " years.\n";
 }
 return 0;
}