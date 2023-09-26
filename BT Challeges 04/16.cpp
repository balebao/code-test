#include <iostream>
#include <string>
using namespace std;
int main (){
    string ngthI,ngthII,ngthIII;
    double thGianI,thGianII,thGianIII;
    cout <<" nhap ten cua ng thi chay thu 1\n";
    cin >> ngthI;
    cout <<" nhap thoi gian chay cua ng thu 1\n";
    cin >> thGianI;
    
    cout <<" nhap ten cua ng thi chay thu 2\n";
    cin >> ngthII;
    cout <<" nhap thoi gian chay cua ng thu 2\n";
    cin >> thGianII;

    cout <<" nhap ten cua ng thi chay thu 3\n";
    cin >> ngthIII;
    cout <<" nhap thoi gian chay cua ng thu 3\n";
    cin >> thGianIII;

    double hangI,hangII,hangIII;
    if (thGianI < thGianII && thGianI < thGianIII){
        cout << ngthI << " chay toi dich dau tien ";
        cout << "voi thoi gian "<< thGianI << endl;
    }else if ( thGianI > thGianII && thGianII < thGianIII){
           cout << ngthII << " chay toi dich dau tien ";
             cout << "voi thoi gian "<< thGianII << endl;
    }else {
           cout << ngthIII << " chay toi dich dau tien ";
             cout << "voi thoi gian "<< thGianIII << endl;
    } return 0;
}