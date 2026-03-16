#include <bits/stdc++.h>
#define MAX_CITY 20
#define MAX_PRICE 1000
#define INF 100000
using namespace std;
int n, m;
int d[MAX_CITY+1][MAX_CITY+1];

void init() {
    for(int r = 1; r <= n; r++) {
        for(int c = 1; c <= n; c++) {
            d[r][c] = INF;
        }
    }
}

void warshall_floyd() {
    for(int via = 1; via <= n; via++) {
        for(int from = 1; from <= n; from++) {
            for(int to = 1; to <= n; to++) {
                d[from][to] = min(d[from][to], d[from][via] + d[via][to]);
            }
        }
    }
}

void print() {
    for(int r = 1; r <= n; r++) {
        for(int c = 1; c <= n; c++) {
            cout << d[r][c];
            if(c == n) putchar('\n');
            else putchar(' ');
        }
    }
}

int main(void) {
    memset(d, 0, sizeof(d));
    cin >> n >> m;
    init();
    for(int r = 0; r < m; r++) {
        int from, to, cost1, cost2;
        scanf("%d,%d,%d,%d", &from, &to, &cost1, &cost2);
        d[from][to] = cost1;
        d[to][from] = cost2;
    }
    warshall_floyd();
    int start, goal, salary, pole_cost;
    scanf("%d,%d,%d,%d", &start , &goal , &salary , &pole_cost);
    cout << (salary - (pole_cost + d[start][goal] + d[goal][start])) << endl;
    
    //print();
    
    return(0);
}