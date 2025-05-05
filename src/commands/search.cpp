#include <iostream>
#include <vector>
#include "../utils/fileSystem/fileSystem.h"

using namespace std;

void command_search(const vector<Student>& students) {
    string searchUsername;
    cout << "Enter username to search: ";
    cin >> searchUsername;

    bool found = false;
    for (const auto& s : students) {
        if (s.username == searchUsername) {
            cout << "Student found:\n";
            cout << "Full Name: " << s.fullName() << endl;
            cout << "Username: " << s.username << endl;
            cout << "Place: " << s.place << endl;
            cout << "College: " << s.college << endl;
            cout << "Department: " << s.department << endl;
            cout << "Grade: " << s.grade << endl;
            cout << "Email: " << s.email << endl;
            cout << "Phone: " << s.phone << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No student found with username: " << searchUsername << endl;
    }
}
