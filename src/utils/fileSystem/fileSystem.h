#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <vector>
#include <string>

struct Student {
    std::string firstName;
    std::string lastName;
    std::string username;
    std::string place;
    std::string college;
    std::string department;
    std::string grade;
    std::string email;
    std::string phone;

    std::string fullName() const { return firstName + " " + lastName; }
};

void saveToFile(const std::vector<Student>& students);
void loadFromFile(std::vector<Student>& students);

#endif
