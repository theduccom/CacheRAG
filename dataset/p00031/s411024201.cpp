#include <iostream>
#include <cmath>
using namespace std;

int hoge(int s, int n) {
    int w = pow(2,n);

    if (n == -1)
        return 0;

    if (w == s) {
        cout << w;
        return 1;
    }

    if (w < s && hoge(s-w, n-1)) {
        cout << " " << w;
        return 1;
    }

    if (hoge(s, n-1)) {
        return 1;
    }

    return 0;
}

int main(void) {
    int s;
    while (cin >> s) {
        hoge(s, 9);
        cout << endl;
    }
    return 0;
}

