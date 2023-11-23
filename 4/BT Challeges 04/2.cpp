#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;cout << " enter is number between 1 and 10 \n";
    cin >> number;
    switch  (number)
    {  
    case 1 :cout <<" corresponding roman number is I\n"<<endl;
    break;
    case 2: cout <<" corresponding roman number is II\n"<<endl;
    break;
    case 3:cout <<" corresponding roman number is III\n"<<endl;
    break;
    case 4:cout <<" corresponding roman number is IV\n"<<endl;
    break;
    case 5:cout <<" corresponding roman number is V\n"<<endl;
    break;
    case 6:cout <<" corresponding roman number is VI\n"<<endl;
    break;
    case 7:cout <<" corresponding roman number is VII\n"<<endl;
    break;
    case 8:cout <<" corresponding roman number is VIII\n"<<endl;
    break;
    case 9:cout <<" corresponding roman number is IX\n"<<endl;
    break;
    case 10:cout <<" corresponding roman number is X\n"<<endl;
    break;
    default:
    cout <<" The value is not between 1 and 10 \n"<< endl;
    break;
    }
    return 0;
}