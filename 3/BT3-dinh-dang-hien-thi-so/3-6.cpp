#include <iostream>
using namespace std;
int main (){
   double test1, test2, test3;
   double average;

   cout << "enter the first test score: ";
   cin >> test1;
   cout << "enter the second tesst score: ";
   cin >> test2;
   cout << " enter the third test score: ";
   cin >> test3;

   average = (test1 + test2 + test3) / 3;
   cout << " the average score is " << average << endl;



    return 0;
}