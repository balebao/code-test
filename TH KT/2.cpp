#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    Person(const string& name, int age) : name(name), age(age) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

protected:
    string name;
    int age;
};

class Student : public Person {
public:
    Student(const string& name, int age, const string& school) : Person(name, age), school(school) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "School: " << school << endl;
    }

private:
    string school;
};

class Pupil : public Person {
public:
    Pupil(const string& name, int age, const string& grade) : Person(name, age), grade(grade) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Grade: " << grade << endl;
    }

private:
    string grade;
};

class Worker : public Person {
public:
    Worker(const string& name, int age, const string& company) : Person(name, age), company(company) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Company: " << company << endl;
    }

private:
    string company;
};

class Artist : public Person {
public:
    Artist(const string& name, int age, const string& artType) : Person(name, age), artType(artType) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Art Type: " << artType << endl;
    }

private:
    string artType;
};

class Singer : public Person {
public:
    Singer(const string& name, int age, const string& genre) : Person(name, age), genre(genre) {}

    void displayInfo() {
        Person::displayInfo();
        cout << "Genre: " << genre << endl;
    }

private:
    string genre;
};

int main() {
    int choice;
    cout << "chon kieu nguoi voi stt tuong ung(1-Student, 2-Pupil, 3-Worker, 4-Artist, 5-Singer): ";
    cin >> choice;

    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    Person* person = nullptr;

    switch (choice) {
        case 1:
            {
                string school;
                cout << "Enter school: ";
                cin >> school;
                person = new Student(name, age, school);
                break;
            }
        case 2:
            {
                string grade;
                cout << "Enter grade: ";
                cin >> grade;
                person = new Pupil(name, age, grade);
                break;
            }
        case 3:
            {
                string company;
                cout << "Enter company: ";
                cin >> company;
                person = new Worker(name, age, company);
                break;
            }
        case 4:
            {
                string artType;
                cout << "Enter art type: ";
                cin >> artType;
                person = new Artist(name, age, artType);
                break;
            }
        case 5:
            {
                string genre;
                cout << "Enter genre: ";
                cin >> genre;
                person = new Singer(name, age, genre);
                break;
            }
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }

    person->displayInfo();
    delete person;

    return 0;
}
