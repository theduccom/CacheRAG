#include <iostream>

using namespace std;

int main() {
    int b, com = 0;
    for (int i = 2; i >= 0; i--) {
        cin >> b;
        com += (b << i);
    }

    if (com == 6 || com == 1) {
        cout << "Open\n";
    }
    else {
        cout << "Close\n";
    }

    return 0;
}