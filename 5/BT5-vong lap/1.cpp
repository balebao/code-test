#include <iostream>
using namespace std;

int main()
{
    int num = 4; // num ban dau co gia tri la 4.

    // Hien thi gia tri cua num.
    cout << "Bien num la " << num << endl;
    cout << "Bay gio toi se tang gia tri cua num.\n\n";

    // Su dung toan tu tang sau de tang gia tri cua num.
    num++;
    cout << "Bay gio bien num la " << num << endl;
    cout << "Toi se tang gia tri cua num mot lan nua.\n\n";

    // Su dung toan tu tang truoc de tang gia tri cua num.
    ++num;
    cout << "Bay gio bien num la " << num << endl;
    cout << "Bay gio toi se giam gia tri cua num.\n\n";

    // Su dung toan tu giam sau de giam gia tri cua num.
    num--;
    cout << "Bay gio bien num la " << num << endl;
    cout << "Toi se giam gia tri cua num mot lan nua.\n\n";

    // Su dung toan tu giam truoc de giam gia tri cua num.
    --num;
    cout << "Bay gio bien num la " << num << endl;
    return 0;
}
