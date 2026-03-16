#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cstdio>

std::string get_input(void) {
    std::string str;
    std::getline(std::cin, str);
    return str;
}

std::string convert(std::string str) {
    char c;
    for (std::string::iterator i = str.begin(); i != str.end(); i++) {
        c = *i;
        switch(c) {
            case ' ':
                break;
            case '.':
                break;
            default:
                *i = toupper(c);
                break;
        }
    }
    return str;
}

int main(void) {
    std::string str = get_input();
    std::cout << convert(str) << std::endl;
    return 0;
}