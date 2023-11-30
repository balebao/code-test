#include <iostream>

// Đa hình chạy (Runtime Polymorphism)
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Cat meows\n";
    }
};

void animalSound(Animal *animal) {
    animal->makeSound();
}

int main() {
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animalSound(animal1);  // Output: Dog barks
    animalSound(animal2);  // Output: Cat meows

    delete animal1;
    delete animal2;

    return 0;
}
