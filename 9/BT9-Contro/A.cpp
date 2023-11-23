#include <iostream>
#include <cmath>
using namespace std;
class point{
    public:
    point() = default;
    point(double x,double y){
        m_x;
        m_y;
    }
    double distance_to(point targer){
  return sqrt(pow(targer.m_x - m_x, 2) + pow(targer.m_y - m_y, 2) * 1.0);
    }
    void print_infor(){
        cout << "point[x : " << m_x << " ,y: " << m_y << "]" << endl;

    }
    private :
    double m_x{1};
    double m_y{1};

};
int main(){
    point p1;
    p1.print_infor();
    return 0;
}
