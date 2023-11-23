#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "dang ghi du lieu tep.\n";

    // Ghi bốn tên vào tệp.
    outputFile << "Bach";
    outputFile << "Beethoven";
    outputFile << "Mozart";
    outputFile << "Schubert";

    // Đóng tệp lại
    outputFile.close();
    cout << "hoan thanh.\n";

    return 0;
}
