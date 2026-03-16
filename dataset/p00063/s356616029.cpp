#include <iostream>
using namespace std;

int main() {
    int count = 0;
    char input[101];
    while (cin >> input) {
        bool symmetryFlag = true;
        int size = 0;
        for (int i = 0; input[i] != '\0'; i++) {
            size++;
        }
        for (int i = 0; i * 2 <= size - 1; i++) {
            if (input[i] != input[size - 1 - i]) {
                symmetryFlag = false;
                break;
            }
        }
        if (symmetryFlag) {
            count++;
        }
    }
    cout << count << endl;
}