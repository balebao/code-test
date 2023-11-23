#include <iostream>
using namespace std;
int main(){

//các biến giá trị
int anotatedValue,
    unCommentedValue;
//tổng số dòng
int totalValue =  1050;

//dòng chưa chú thích chiêm 36%
anotatedValue = totalValue * 36 / 100;

//dòng chưa chú thích
unCommentedValue = totalValue - anotatedValue;

//kết quả hiển thị
cout << anotatedValue << " dong co chu thich.\n ";
cout << unCommentedValue << " dong chua co chu thich." << endl;


return 0;



}