#include <iostream>
using namespace std;
int main() {
    const double caloDot1p = 3.6; 
    const int tongTG = 30; 
    const int khoangdo = 5; 

    // In tiêu đề cho bảng
   cout << "Time (minutes)\tCalories Burned" << std::endl;

    // Tính và in số calo đã đốt cháy mỗi 5p
    for (int time = khoangdo; time <= tongTG; time += khoangdo) {
        double caloDotMoi5p = caloDot1p * time;
        std::cout << time << "\t\t" << caloDotMoi5p << std::endl;
    }

    return 0;
}
