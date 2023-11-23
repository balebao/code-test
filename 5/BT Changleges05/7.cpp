#include <iostream>
#include <climits>
using namespace std;
int main () {
    int so,
        soNhoI,
        soLonI;

        cout << " nhap con con so bat ki, khi muon ket thuc nhap tru 99:\n";
        while(true){
            cin >> so;
            if (so == -99){
                break;
            }
        }
        if(so < soNhoI){
            soNhoI = so;
        } if(so > soLonI){
            soLonI = so;
        
        }
        cout << "so nho nhat trong day la: "<< soNhoI << endl;
        cout << "so lon nhat trong day la: "<< soLonI << endl;
    return 0;
}