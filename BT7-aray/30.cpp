#include <iostream>
 #include <vector>
 using namespace std; 
 int main()
 {
 vector<int> values(100); 
  cout << "The values vector has "//giá trị của vecter
  << values.size() << " elements.\n";//phần tử
  cout << "I will call the clear member function...\n";//tôi sẽ gọi hàm clear
  values.clear();
  cout << "Now, the values vector has "//bh vester có gia trị
  << values.size() << " elements.\n";
  return 0;
 }