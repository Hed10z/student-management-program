#include <iostream>
#include <vector>
#include "../utils/fileSystem/fileSystem.h"

using namespace std;

void command_add(vector<Student>& students) {
    Student s;
    cout << "Enter first name: "; cin >> s.firstName;
    cout << "Enter last name: "; cin >> s.lastName;
    cout << "Enter username: "; cin >> s.username;
    cout << "Enter place: "; cin >> s.place;
    cout << "Enter college: "; cin >> s.college;
    cout << "Enter department: "; cin >> s.department;
    cout << "Enter grade: "; cin >> s.grade;
    cout << "Enter email: "; cin >> s.email;
    cout << "Enter phone: "; cin >> s.phone;
    students.push_back(s);
    cout << "Student added.\n";
}
