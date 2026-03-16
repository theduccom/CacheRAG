#include<bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

int main() {
    while (1) {
        int x, h;
        cin >> x >> h;
        if (!x) return 0;
        double l = sqrt(h * h + x * x * 0.25);
        printf("%.9lf\n", x * (x + l * 2));
    }
}

