#define DA(a, n) for (int __macro_i = 0; __macro_i < n; ++__macro_i) { cout << a[__macro_i] << " "; } cout << endl;
#include<iostream>
#include<vector>
#include<cassert>
#include<cmath>

using namespace std;

int main()
{
    int b[] = {1, 0, 0};
    char x, c, y;
    while(cin >> x >> c >> y) {
        int xi = x - 'A';
        int yi = y - 'A';
        int tmp = b[xi];
        b[xi] = b[yi];
        b[yi] = tmp;
        // DA(b, 3);
    }
    for (int i = 0; i < 3; ++i) {
        if (b[i]) {
            cout << (char)('A' + i) << endl;
            break;
        }
    }
}

