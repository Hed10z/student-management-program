#include <iostream>
#include <vector>
#include "../utils/fileSystem/fileSystem.h"

using namespace std;

void command_delete(vector<Student>& students) {
    string usernameToDelete;
    cout << "Enter username to delete: ";
    cin >> usernameToDelete;

    bool found = false;
    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->username == usernameToDelete) {
            students.erase(it);
            cout << "Student with username '" << usernameToDelete << "' deleted.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No student found with username: " << usernameToDelete << endl;
    }
}
