#include <iostream>

std::string str;

int main() {
    getline(std::cin, str);

    int len = str.length();
    for(int i=0; i < len; ++i) {
        char c = str[i];
        if(c >= 'a' && c <= 'z') {
            char upper = (c - 'a') + 'A';
            std::cout << upper;
        } else {
            std::cout << c;
        }
    }
    std::cout << std::endl;
}
