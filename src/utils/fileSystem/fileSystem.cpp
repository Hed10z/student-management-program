#include "fileSystem.h"
#include <fstream>
#include <iostream>

void saveToFile(const std::vector<Student>& students) {
    std::ofstream outFile("students.txt");
    for (const auto& s : students) {
        outFile << s.firstName << ' '
                << s.lastName << ' '
                << s.username << ' '
                << s.place << ' '
                << s.college << ' '
                << s.department << ' '
                << s.grade << ' '
                << s.email << ' '
                << s.phone << '\n';
    }
    outFile.close();
    std::cout << "Saved to students.txt\n";
}

void loadFromFile(std::vector<Student>& students) {
    std::ifstream inFile("students.txt");
    Student s;
    while (inFile >> s.firstName >> s.lastName >> s.username
                  >> s.place >> s.college >> s.department
                  >> s.grade >> s.email >> s.phone) {
        students.push_back(s);
    }
    inFile.close();
    std::cout << "\n ";
    std::cout << "Loaded " << students.size() << " students from file.\n";
}
