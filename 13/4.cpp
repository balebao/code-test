#include <iostream>
#include <string>
using namespace std;
class PersonalData {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    // Constructors
    PersonalData() : age(0) {}

    PersonalData(string n, string addr, int a, string phone)
        : name(n), address(addr), age(a), phoneNumber(phone) {}

    // Accessor functions
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    // Mutator functions
    void setName(string n) {
        name = n;
    }

    void setAddress(string addr) {
        address = addr;
    }

    void setAge(int a) {
        age = a;
    }

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
};

int main() {
    // Create an instance holding your information
    PersonalData myInfo("Your Name", "Your Address", 25, "123-456-7890");

    // Create instances holding your friends' or family members' information
    PersonalData friend1("Friend1 Name", "Friend1 Address", 30, "111-222-3333");
    PersonalData friend2("Friend2 Name", "Friend2 Address", 35, "444-555-6666");

    // Display information
    cout << "Your Information:\n";
    cout << "Name: " << myInfo.getName() << "\n";
    cout << "Address: " << myInfo.getAddress() << "\n";
    cout << "Age: " << myInfo.getAge() << "\n";
    cout << "Phone Number: " << myInfo.getPhoneNumber() << "\n\n";

    cout << "Friend 1's Information:\n";
    cout << "Name: " << friend1.getName() << "\n";
    cout << "Address: " << friend1.getAddress() << "\n";
    cout << "Age: " << friend1.getAge() << "\n";
    cout << "Phone Number: " << friend1.getPhoneNumber() << "\n\n";

    cout << "Friend 2's Information:\n";
    cout << "Name: " << friend2.getName() << "\n";
    cout << "Address: " << friend2.getAddress() << "\n";
    cout << "Age: " << friend2.getAge() << "\n";
    cout << "Phone Number: " << friend2.getPhoneNumber() << "\n";

    return 0;
}

