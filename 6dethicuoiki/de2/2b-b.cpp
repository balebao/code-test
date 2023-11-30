#include <iostream>

// Lớp trừu tượng
class Shape {
public:
    virtual void draw() const = 0; // Hàm ảo pure virtual
    virtual double area() const = 0;
};

// Lớp con kế thừa từ lớp trừu tượng
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() const override {
        std::cout << "Drawing a circle\n";
    }

    double area() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle circle(5.0);
    circle.draw();  // Output: Drawing a circle
    std::cout << "Area: " << circle.area() << std::endl;

    // Không thể tạo đối tượng trực tiếp từ lớp trừu tượng
    // Shape shape; // Lỗi: cannot declare variable ‘shape’ to be of abstract type ‘Shape’

    return 0;
}
