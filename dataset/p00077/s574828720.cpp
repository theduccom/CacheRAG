#include <iostream>
using namespace std;

int main() {
    char ch[101] = "";
    while (cin >> ch) {
        char output[101];
        int index = 0;
        for (int i = 0; i < (int)(sizeof ch / sizeof ch[0]); i++) {
            if (ch[i] == '@') {
                int n = ch[i + 1] - '0';
                char c = ch[i + 2];
                for (int j = 0; j < n; j++) {
                    output[index++] = c;
                }
                i += 2;
            } else {
                output[index++] = ch[i];
            }
        }
        cout << output << endl;
    }
}