#include <iostream>
#include <string>

using namespace std;

int main()
{
    string roman;
    while (cin >> roman) {
        int arabic = 0;
        int left = 1000, right;
        for (size_t i = 0; i < roman.size(); i++) {
            switch (roman.at(i)) {
            case 'M':
                right = 1000;
                break;
            case 'D':
                right = 500;
                break;
            case 'C':
                right = 100;
                break;
            case 'L':
                right = 50;
                break;
            case 'X':
                right = 10;
                break;
            case 'V':
                right = 5;
                break;
            case 'I':
                right = 1;
                break;
            }

            arabic += right;
            if (left < right) {
                arabic -= 2 * left;
            }

            left = right;
        }

        cout << arabic << endl;
    }

    return 0;
}