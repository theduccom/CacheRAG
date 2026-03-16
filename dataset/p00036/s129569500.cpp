#include <iostream>
#include <string>

int main()
{
    std::string figure[] = {
        "1100000011",
        "1000000010000000100000001",
        "1111",
        "1000000110000001",
        "11000000011",
        "100000001100000001",
        "110000011"
    };

    while (!std::cin.eof()) {
        std::string s = "", tmp;
        for (int i = 0; i < 9; ++i) {
            getline(std::cin, tmp);
            s += tmp;
        }

        for (int i = 0; i < 7; ++i) {
            if (s.find(figure[i]) != std::string::npos) {
                std::cout << static_cast<char>(i + 'A') << std::endl;
                break;
            }
        }
    }
}