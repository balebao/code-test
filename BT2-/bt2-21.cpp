#include <iostream>
using namespace std;
 int main(){


  double regularWages,                                   //Để giữ tiền lương thường xuyên
         basePayRate = 18.25,                            //Mức tiền lương cơ bản 
         regularHouse = 40.0,                            //Số giờ làm việc it hơn ngoài giờ
         overtimeWages,                                  //Để giữ tiền lương làm thêm giờ
         overtimePayRate = 27.78,                        //Mức tiên lương làm thêm giờ
         overtimeHouse = 10,                             //Số giờ làm thêm đã làm việc
         totalWages;                                     //Để giữ tổng tiền lương

        //Tính toán tiền lương thương xuyên
        regularWages = basePayRate * regularHouse;

         //TÍnh toán tiền lương làm thêm giờ
        overtimeWages = overtimeHouse * overtimePayRate;

        //Tính toán tổng số tiền 
        totalWages = regularWages + overtimeWages;

        //Hiển thị tổng tiền lương
        cout << "Wages for this week are $" << totalWages << endl;

        return 0;

 }