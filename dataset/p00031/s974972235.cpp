#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        bool f = false;
        for (int i = 0; i <= 9; ++i) {
            if (n >> i & 1) {
                printf(f ? " %d" : "%d", 1 << i);
                f = true;
            }
        }
        printf("\n");
    }
}