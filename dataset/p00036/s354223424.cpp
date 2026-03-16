#include <iostream>
#include <array>
#include <string>

using namespace std;

constexpr size_t SIZE = 8;
constexpr size_t PATTERN = 7;

const array<string, PATTERN> pattern = {
    "1100000011", "1000000010000000100000001", "1111",
    "1000000110000001", "11000000011",
    "100000001100000001", "110000011"};

string surface;

char choice();

int main()
{
    while (true) {
        surface = "";

        for (size_t row = 0; row < SIZE; row++) {
            string buf;
            cin >> buf;

            surface += buf;
        }

        cout << choice() << endl;

        cin.ignore(2);
        if (cin.eof()) {
            break;
        }
    }

    return 0;
}

char choice()
{
    for (size_t i = 0; i < PATTERN; i++) {
        if (surface.find(pattern.at(i), 0) != string::npos) {
            return static_cast<char>('A' + i);
        }
    }
    return 'G';
}