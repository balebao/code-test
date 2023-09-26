#include <iostream>
using namespace std;
int main()
{
char employed, // hiện đang được tuyển , Y hoặc N
recentGrad; // mới tôt nghiệp
 //người dùng có mới tốt nghiệp và đag làm việc kh
 cout << "Answer the following questions\n";
 cout << "with either Y for Yes or ";
 cout << "N for No.\n";
 cout << "Are you employed? ";
 cin >> employed;
 cout << "Have you graduated from college ";
 cout << "in the past two years? ";
 cin >> recentGrad;
 // xác định tư cách cho vay của người dùng
 if (employed == 'Y')
 {
 if (recentGrad == 'Y') 
 {
 cout << "You qualify for the special ";
 cout << "interest rate.\n";
 }
 else 
 {
 cout << "You must have graduated from ";
 cout << "college in the past two\n";
 cout << "years to qualify.\n";
 }
 }
 else
 {
 cout << "You must be employed to qualify.\n";
 }
 return 0;}