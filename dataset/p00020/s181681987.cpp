#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string line;
    getline(std::cin, line);

    for (auto i = 0; i < line.size(); i++) {
        if ('a' <= line.at(i) && line.at(i) <= 'z') {
            line.at(i) = toupper(line.at(i));
        }
    }

    std::cout << line << std::endl;

    return 0;
}