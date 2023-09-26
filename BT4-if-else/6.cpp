#include <iostream>
#include <iomanip>
using namespace std;
int main (){
const int highCore = 95;
double score1,score2,score3,average;

cout << "enter 3 test scores\n";
cin >> score1 >> score2 >> score3;

average = (score1 + score2 + score3) / 3;
cout << fixed << showpoint << setprecision(1);
cout << " your average is "<< average << endl;

if(average > highCore){
cout << " congratulations!\n";
cout <<" that is high core\n";
cout <<" you a desever pat on the back\n";
}
return 0;
}