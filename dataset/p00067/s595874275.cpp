#include <iostream>
#include <cstdio>
#define MAX_L 12
using namespace std;
char table[MAX_L][MAX_L];
int fdx[] = {1, 0, -1, 0}, fdy[] = {0, 1, 0, -1};


void dfs(int y, int x) {
    if(x < 0 || x >= MAX_L || y < 0 || y >= MAX_L || table[y][x] == '0') return;
    table[y][x]--;
    for(int r = 0; r < 4; r++) {
        dfs(y + fdy[r], x + fdx[r]);
    }
    return;
}

int main(void) {
    while(true) {
        for(int r = 0; r < MAX_L; r++) {
            if(scanf("%s", table[r]) == EOF) return(0);
        }
        int cnt = 0;
        for(int r = 0; r < MAX_L; r++) {
            for(int c = 0; c < MAX_L; c++) {
                if(table[r][c] == '1') {
                    dfs(r, c);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return(0);
}