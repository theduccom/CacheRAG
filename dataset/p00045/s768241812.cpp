#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int m, n, sum = 0, total = 0, cnt = 0;
    while (scanf("%d,%d", &m, &n) != EOF) {
        sum += m * n;
        total += n;
        cnt++;
    }
    cout << sum << endl;
    cout << round((double)total / cnt) << endl;
    
    return 0;
}