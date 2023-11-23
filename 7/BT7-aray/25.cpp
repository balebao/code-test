#include <iostream>
#include <vector>
using namespace std;
int main()
{
// Define and initialize a vecto(định nghĩa và khởi tạo 1 số nguyên)
vector<int> numbers(5);

 // Get values for the vector elements.(nhap giá trị cho các phần tử trong vecter)
 for (int &val : numbers)
 {
 cout << "Enter an integer value: ";//nhập một giâ trị số nguyên
 cin >> val;
 }

 // Display the vector elements.
 cout << "Here are the values you entered:\n";// dươi đây là các giá trị bạn đã nhập
 for (int val : numbers)
 cout << val << endl;

 return 0;
 }