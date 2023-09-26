#include <ctime>
#include <iostream>
using namespace std;
int main(){
srand(time(0));
int number1 = rand() % 100 + 1;
int number2 = rand() % 100 + 1;

cout << number1 << endl;
cout << number2 << endl;

int answer;
cout << " hay nhap cau tra loi ";
cin >> answer;

if (answer == number1 + number2){
    cout << " ket qua chinh sac";
}else {
cout << " ket qua sai hay thuc hien lai";
}
return 0;
}