#include <iostream>
#include <string>

void print(const std::string& color, const std::string& text, const bool& newline = false, const std::string& reset = "\033[0m") {
    std::cout << color << text << reset << (newline ? "\n" : "") << std::flush;
}
