#include <bits/stdc++.h>
#define MAX_N 10
using namespace std;
int table[MAX_N+1][MAX_N+1];
int n;

void print() {
    for(int r = 0; r < n + 1; r++) {
        for(int c = 0; c < n + 1; c++) {
            printf("%5d", table[r][c]);
        }
        putchar('\n');
    }
}

int calcVirtual(int x) {
    int sum = 0;
    for(int r = 0; r < n; r++) {
        sum += table[r][x];
    }
    return(sum);
}

int calcHorizontal(int y) {
    int sum = 0;
    for(int r = 0; r < n; r++) {
        sum += table[y][r];
    }
    return(sum);
}

int main(void) {
    while(cin >> n, n != 0) {
        for(int r = 0; r < n; r++) {
            for(int c = 0; c < n; c++) {
                cin >> table[r][c];
            }
        }
        int sum = 0;
        for(int r = 0; r < n; r++) {
            sum += (table[n][r] = calcVirtual(r));
            table[r][n] = calcHorizontal(r);
        }
        table[n][n] = sum;
        print();
    }
}