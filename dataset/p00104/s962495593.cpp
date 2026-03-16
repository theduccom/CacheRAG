#include <iostream>

enum struct Panel { none, up, down, right, left };

int main() {
    int h, w;
    while (std::cin >> h >> w && h != 0 && w != 0) {
        std::cin.ignore();

        auto room = new std::pair<Panel, bool>[h * w]();
        std::string s;
        for (int i = 0; i < h; i++) {
            std::getline(std::cin, s);
            for (int j = 0; j < w; j++) {
                switch (s[j]) {
                    case '.': room[i * w + j].first = Panel::none; break;
                    case '^': room[i * w + j].first = Panel::up; break;
                    case 'v': room[i * w + j].first = Panel::down; break;
                    case '>': room[i * w + j].first = Panel::right; break;
                    case '<': room[i * w + j].first = Panel::left; break;
                    default: return EXIT_FAILURE;
                }
            }
        }

        int x = 0, y = 0;
        [&]() {
            while (true) {
                if (room[y * w + x].second) {
                    std::cout << "LOOP";
                    break;
                }
                room[y * w + x].second = true;
                switch (room[y * w + x].first) {
                    case Panel::up: y--; break;
                    case Panel::down: y++; break;
                    case Panel::right: x++; break;
                    case Panel::left: x--; break;
                    case Panel::none: std::cout << x << ' ' << y; return;
                }
            }
        }();
        std::cout << std::endl;
    }
}