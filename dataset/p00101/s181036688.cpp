#include <iostream>
#include <string>

int main() {
    std::string src = "Hoshino";
    std::string tar = "Hoshina";

    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string s;
    for (int i = 0; i < n; i++) {
        std::getline(std::cin, s);
        auto pos = s.find(src);
        while (pos != std::string::npos) {
            s.replace(pos, tar.length(), tar);
            pos = s.find(src, pos + tar.length());
        }

        std::cout << s << std::endl;
    }
}