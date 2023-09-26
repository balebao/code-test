#include <iostream>
#include  <iomanip>
using namespace std;
int main (){
    double score1, score2, score3, average;
cout << " enter 3 test scores and i will average them\n";
cin >> score1 >> score2 >> score3;

//tính và hiển thị kq
average = ( score1 + score2 + score3) / 3;
cout << fixed << showpoint << setprecision(1);
cout << " your average is "<< average << endl;
 
 if(average == 100)
 cout << "congratulations!,that is a perfect score!\n";
 return 0;
}