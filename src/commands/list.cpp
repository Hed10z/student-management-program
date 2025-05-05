#include <iostream>
#include <iomanip>
#include <vector>
#include "../utils/fileSystem/fileSystem.h"

using namespace std;

void command_list(const vector<Student>& students) {
    cout << "\033[36m" << left
         << setw(15) << "Full Name"
         << setw(15) << "Username"
         << setw(15) << "Place"
         << setw(15) << "College"
         << setw(15) << "Department"
         << setw(10) << "Grade"
         << setw(20) << "Email"
         << setw(15) << "Phone"
         << "\033[0m" << endl;
    cout << string(120, '-') << endl;

    for (const auto& s : students) {
        cout << left
             << setw(15) << s.fullName()
             << setw(15) << s.username
             << setw(15) << s.place
             << setw(15) << s.college
             << setw(15) << s.department
             << setw(10) << s.grade
             << setw(20) << s.email
             << setw(15) << s.phone
             << endl;
    }
}
