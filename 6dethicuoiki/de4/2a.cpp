#include <iostream>
#include <string>

class IFace {
public:
    virtual void show() = 0;
    virtual IFace* clone() = 0;
    virtual ~IFace() {}
};

class EyedFace : public IFace {
private:
    std::string shape;
    int eyes;

public:
    void show() override {
        std::cout << "Shape: " << shape << ", Eyes: " << eyes << std::endl;
    }

    IFace* clone() override {
        EyedFace* Clone = new EyedFace(shape, eyes);
        return Clone;
    }

    virtual ~EyedFace() {
        eyes = 0;
        shape = "";
    }

    EyedFace(const std::string& sh, const int& e) : shape(sh), eyes(e) {}
};
