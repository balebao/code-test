#include <iostream>
#include <iomanip>
using namespace std;
struct Student {
    string name;
    int idnum;
    int* tests;
    double average;
    char grade;
};

// Function to calculate the average test score
double calculateAverage(int* tests, int numTests) {
    double sum = 0;
    for (int i = 0; i < numTests; ++i) {
        sum += tests[i];
    }
    return (numTests == 0) ? 0 : (sum / numTests);
}

// Function to calculate the course grade based on the grading scale
char calculateGrade(double average) {
    if (average >= 91) return 'A';
    else if (average >= 81) return 'B';
    else if (average >= 71) return 'C';
    else if (average >= 61) return 'D';
    else return 'F';
}

// Function to input student data
void inputStudentData(Student& student, int numTests) {
    cout << "Enter student name: ";
    getline(cin, student.name);

    cout << "Enter student ID number: ";
    cin >> student.idnum;

    student.tests = new int[numTests];
    for (int i = 0; i < numTests; ++i) {
        cout << "Enter test score " << i + 1 << " for " << student.name << ": ";
        cin >> student.tests[i];
    }

    student.average = calculateAverage(student.tests, numTests);
    student.grade = calculateGrade(student.average);
}

// Function to display student data
void displayStudentData(const Student& student) {
    cout << left << setw(20) << student.name
              << setw(10) << student.idnum
              << setw(15) << fixed << setprecision(2) << student.average
              << setw(5) << student.grade << endl;
}

int main() {
    int numTests, numStudents;

    cout << "Enter the number of test scores: ";
    cin >> numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Dynamically allocate an array of structures
    Student* students = new Student[numStudents];

    // Input data for each student
    for (int i = 0; i < numStudents; ++i) {
        cin.ignore(); // Clear the newline character from the buffer
        inputStudentData(students[i], numTests);
    }

    // Display header
    cout << left << setw(20) << "Name"
              << setw(10) << "ID Number"
              << setw(15) << "Average"
              << setw(5) << "Grade" << endl;
    
    // Display student data
    for (int i = 0; i < numStudents; ++i) {
        displayStudentData(students[i]);
    }

    // Deallocate dynamically allocated memory
    for (int i = 0; i < numStudents; ++i) {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}
