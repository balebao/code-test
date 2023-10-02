#include <iostream>
 #include <vector>
 using namespace std;

 // Function prototype ()
 void showValues(vector<int>);

 int main()
 {
 vector<int> values;

 // Put a series of numbers in the vector.
 for (int count = 0; count < 7; count++)
 values.push_back(count * 2);

 // Display the numbers.
 showValues(values);
 return 0;
 }
 //*************************************************************************************
 // Definition of function showValues. *           (Định nghĩa hàm showValues.)
 // This function accepts an int vector as its *   (Hàm này chấp nhận một vectơ int làm)
 // argument. The value of each of the vector's *  (lý lẽ. Giá trị của mỗi vectơ)
 // elements is displayed. *                       (phần tử được hiển thị.)
 //*************************************************************************************

 void showValues(vector<int> vect)
 {
 for (int count = 0; count < vect.size(); count++)
 cout << vect[count] << endl;
 }