#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructors
    Employee(string empName, int empId, string empDept, string empPosition)
        : name(empName), idNumber(empId), department(empDept), position(empPosition) {}

    Employee(string empName, int empId)
        : name(empName), idNumber(empId), department(""), position("") {}

    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    // Mutator functions
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empId) {
        idNumber = empId;
    }

    void setDepartment(string empDept) {
        department = empDept;
    }

    void setPosition(string empPosition) {
        position = empPosition;
    }

    // Accessor functions
    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }
};

int main() {
    // Create three Employee objects
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee emp2("Mark Jones", 39119, "IT", "Programmer");
    Employee emp3("Joy Rogers", 81774);

    // Set department and position for emp3
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");

    // Display data for each employee
    cout << "Employee 1:\n";
    cout << "Name: " << emp1.getName() << "\n";
    cout << "ID Number: " << emp1.getIdNumber() << "\n";
    cout << "Department: " << emp1.getDepartment() << "\n";
    cout << "Position: " << emp1.getPosition() << "\n\n";

    cout << "Employee 2:\n";
    cout << "Name: " << emp2.getName() << "\n";
    cout << "ID Number: " << emp2.getIdNumber() << "\n";
    cout << "Department: " << emp2.getDepartment() << "\n";
    cout << "Position: " << emp2.getPosition() << "\n\n";

    cout << "Employee 3:\n";
    cout << "Name: " << emp3.getName() << "\n";
    cout << "ID Number: " << emp3.getIdNumber() << "\n";
    cout << "Department: " << emp3.getDepartment() << "\n";
    cout << "Position: " << emp3.getPosition() << "\n";

    return 0;
}
