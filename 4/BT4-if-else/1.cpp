#include <iostream>
#include <iomanip>
using namespace std;
int main (){

bool trueValue, falseValue;
int x = 5, y = 10;

trueValue = x < y;
falseValue = x ==y;

cout << "trueValue is " << trueValue <<endl;
cout << " faldseValue is " << falseValue <<endl;

 
 int HIGH_SCORE = 95; //diem cao la 95 hoac tot hon
 int score1, score2, score3; // 3 moc diem kiem tra
 double average; // diem tb thap nhat

// lay 3 diem kiem tra
cout << "Enter 3 test scores and I will average them:\n";
cin >> score1 >> score2 >> score3;

// tinh toan va viet lai diem tb
average = (score1 + score2 + score3) / 3.0;
cout << fixed << showpoint << setprecision(1);
cout << "Your average is " << average << endl;

// neu diem tb cao; xin chuc mung
if (average > HIGH_SCORE)
cout << "Congratulations! That's a high score!\n";
return 0;
} 