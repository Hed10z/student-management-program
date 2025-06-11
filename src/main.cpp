#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include "const/colorVar.cpp"

#include "utils/fileSystem/fileSystem.cpp" 
#include "utils/print/print.cpp"

#include "utils/patterns/ascii.cpp"
#include "utils/patterns/command.cpp"

// Commands
#include "commands/list.cpp"
#include "commands/add.cpp"
#include "commands/search.cpp"
#include "commands/delete.cpp"

using namespace std;

int main() {
    print(cyan, asciiArt, true);
    print(magenta, command_pattern, true);
    print(magenta, "Type 'help' for a list of commands.\n", true);

    vector<Student> students;
    string command;

    loadFromFile(students);

    while (true) {
        print(magenta, "\nroot@local:~$> ");
        cin >> command;
        print(green, "\n");

        if (command == "list") {
            command_list(students);
        }
        else if (command == "add") {
            command_add(students); 
        }
        else if (command == "search") {
            command_search(students);
        }
        else if (command == "delete") {
            command_delete(students);
        }
        else if (command == "save") {
            saveToFile(students);
        }
        else if (command == "help") {
            print(magenta, command_pattern, true);
        }
        else if (command == "clear") {
            system("cls");
        }
        else if (command == "exit") {
            print(yellow, "\nGoodbye!\n");
            break;
        }
        else {
            print(red, "Invalid command.\n");
        }
    }

    return 0;
}
