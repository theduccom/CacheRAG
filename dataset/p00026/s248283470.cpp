#include <iostream>

using std::cin;

struct Ink {
    int x;
    int y;
    int size;
};

constexpr int PAPER_SIZE = 10;
int paper[PAPER_SIZE][PAPER_SIZE] = {{0}};

void size1(const Ink& drop);
void size2(const Ink& drop);
void size3(const Ink& drop);

int main()
{
    Ink dropped;
    char ch;
    while (cin >> dropped.x >> ch >> dropped.y >> ch >> dropped.size) {

        if (dropped.size == 1) {
            size1(dropped);
        } else if (dropped.size == 2) {
            size2(dropped);
        } else if (dropped.size == 3) {
            size3(dropped);
        } else {
            std::cout << "ERROR!" << std::endl;
        }
    }

    int white = 0, dropped_max = 0;
    for (auto i = 0; i < PAPER_SIZE; i++) {
        for (auto j = 0; j < PAPER_SIZE; j++) {
            if (paper[i][j] == 0) {
                white++;
            } else if (paper[i][j] > dropped_max) {
                dropped_max = paper[i][j];
            }
        }
    }

    std::cout << white << std::endl << dropped_max << std::endl;

    return 0;
}

void dropInk(const int x, const int y);

void size1(const Ink& dropped)
{
    int x = dropped.x;
    int y = dropped.y;

    dropInk(x, y);
    dropInk(x + 1, y);
    dropInk(x - 1, y);
    dropInk(x, y + 1);
    dropInk(x, y - 1);
}

void size2(const Ink& dropped)
{
    int x = dropped.x;
    int y = dropped.y;

    size1(dropped);
    dropInk(x + 1, y + 1);
    dropInk(x + 1, y - 1);
    dropInk(x - 1, y + 1);
    dropInk(x - 1, y - 1);
}

void size3(const Ink& dropped)
{
    int x = dropped.x;
    int y = dropped.y;

    size2(dropped);
    dropInk(x, y + 2);
    dropInk(x, y - 2);
    dropInk(x + 2, y);
    dropInk(x - 2, y);
}

void dropInk(int x, int y)
{
    if (x >= 0 && x < 10 && y >= 0 && y < 10) {
        paper[x][y]++;
    }
}