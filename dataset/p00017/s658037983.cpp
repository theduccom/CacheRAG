#include <iostream>
#include <regex>

std::string decrypto(std::string str) {
    using namespace std;
    regex pattern(".*(the|this|that).*");
    smatch sm;
    for (int c = 0; c < 'z' - 'a' + 1; ++c) {
        for (size_t i = 0; i < str.size(); ++i) {
            if ('a' <= str[i] && str[i] <= 'z') {
                if (str[i] == 'z') {
                    str[i] = 'a';
                } else {
                    str[i] += 1;
                }
            }
        }
        //if (regex_match(str, sm, pattern)) {
        if (str.find( "the" ) != string::npos || str.find( "this" ) != string::npos || str.find( "that" ) != string::npos) {
            return str;
        }
    }
    return string("");
}

int main() {
    std::string str;
    while (std::getline(std::cin, str)) {
        std::cout << decrypto(str) << std::endl;
    }
}