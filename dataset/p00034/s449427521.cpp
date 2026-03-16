#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int l[10];
    int v1, v2;
    while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
                l, l + 1, l + 2, l + 3, l + 4, l + 5, l + 6, l + 7, l + 8, l + 9, &v1, &v2) != EOF) {
        int sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += l[i];
        }
        double meetTime = (double)sum / (v1 + v2);
        sum = 0;
        for (int i = 0; i < 10; i++) {
            sum += l[i];
            if (meetTime * v1 <= sum) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}