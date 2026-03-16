#include <iostream>

using namespace std;

int main() {
    char in[1000] = { 0 };
    cin.getline(in, sizeof(in));
    int offset = 0;

    for (int i = 0; i < 1000; ++i) {
        if (('a' <= in[i]) && (in[i] <= 'z')) {
            in[i] -= 32;
        }
    }

    cout << in << endl;

    return 0;
}