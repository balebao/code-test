#ifndef _PhanSo_h
#define _PhanSo_h

#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    // Constructors
    PhanSo() : tu(0), mau(1) {}
    PhanSo(const int& tu, const int& mau);
    
    // Overloaded operators
    PhanSo operator+(const PhanSo& ps) const;
    PhanSo& operator+=(const PhanSo& ps);
    PhanSo operator+(const int& iNum) const;
    PhanSo operator++();
    operator int() const;

    // Friend function
    friend ostream& operator<<(ostream& os, const PhanSo& ps);

    // Destructor
    ~PhanSo();
};

#endif
