#include <iostream>
using namespace std;
int main(){

    int totalSeconds = 125;


    //các biến phút và giây
    int minutes, seconds;


    //lấy số phút
    minutes = totalSeconds / 60;


    //lấy số giây
    seconds = totalSeconds % 60;

    
    //In kết quả
    cout << totalSeconds <<" seconds is equivalent to: \n";
    cout << " minutes: " << minutes << endl;
    cout << " seconds: " << seconds << endl;


    return 0;

}