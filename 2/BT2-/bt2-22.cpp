#include <iostream>
using namespace std;
int main (){


    //các biên giữ tiền lương và đóng góp hàng tháng 
    double monthlyPay = 6000.0, contribution;

        //tính toán và hiện thị với mức 5%
         contribution = monthlyPay * 0.05;
         cout << "5 percent is $" << contribution << " per month.\n";
         
         //tính toans và hiển thị với mức 7%
         contribution = monthlyPay * 0.07;
         cout << "7 percent is $" << contribution << " per month.\n";

         //tính toán và hiển thị với mức 10%
         contribution = monthlyPay * 0.1;
         cout << "10 percent is $" << contribution << " per month.\n";

         return 0;
}