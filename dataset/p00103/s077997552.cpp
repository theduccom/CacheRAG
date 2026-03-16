#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string s;
    for (int i = 0; i < n; i++) {
        int out = 0;
        int runner = 0;
        int score = 0;
        while (out < 3) {
            std::getline(std::cin, s);
            if (s == "HIT") {
                runner++;
                if (runner > 3) {
                    score++;
                    runner = 3;
                }
            } else if (s == "HOMERUN") {
                score += runner + 1;
                runner = 0;
            } else if (s == "OUT") {
                out++;
            }
        }
        std::cout << score << std::endl;
    }
}