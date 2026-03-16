#include <iostream>
#include <string>

int main() {
    std::string str;

    while (std::cin >> str) {
        std::size_t found;

        while (found = str.find("@"),
               found != std::string::npos) {
        
            std::string rest(std::stoi(str.substr(found + 1, 1)),
                            str[found + 2]);

            str.erase(found, 3);
            str.insert(found, rest);
        }

        std::cout << str << std::endl;
    }

    return 0;
}