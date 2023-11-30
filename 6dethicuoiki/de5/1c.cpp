#include <iostream>

class Singleton {
private:
    // Biến static private để lưu thể hiện duy nhất của lớp
    static Singleton* instance;

    // Hạn chế khả năng tạo ra các thể hiện mới từ bên ngoài
    Singleton() {}

public:
    // Phương thức tĩnh để truy cập hoặc tạo ra thể hiện
    static Singleton* getInstance() {
        if (!instance) {
            // Tạo một thể hiện nếu chưa tồn tại
            instance = new Singleton();
        }
        return instance;
    }

    // Các phương thức khác của lớp
    void doSomething() {
        std::cout << "Singleton is doing something." << std::endl;
    }
};

// Khởi tạo biến static
Singleton* Singleton::instance = nullptr;

int main() {
    // Sử dụng phương thức tĩnh để lấy thể hiện duy nhất
    Singleton* singletonInstance1 = Singleton::getInstance();
    singletonInstance1->doSomething();

    // Thử tạo một thể hiện khác, nhưng vẫn nhận được thể hiện đã tạo trước đó
    Singleton* singletonInstance2 = Singleton::getInstance();
    singletonInstance2->doSomething();

    return 0;
}
