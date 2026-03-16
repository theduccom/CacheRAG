#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
#define MAX_N 20

priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > open;
map<int, int> closed;

int search(int start, int goal);
void resetDx();

int n, maxCost, dx[MAX_N][MAX_N][2];
void set(int now, int next, int nowCost, int plusCost);

int main(){
    resetDx();
    int m, x1, x2, y1, y2;
    cin >>n >>m;
    for(int i = 0; i < m; i++){
        int a1, b1, c1, d1;
        scanf("%d,%d,%d,%d", &a1, &b1, &c1, &d1);
        dx[a1][b1][0] = c1;
        dx[a1][b1][1] = d1;
    }
    scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
    int cost = 0;
    maxCost = y1 - y2;
    open.push( make_pair(x1, 0) );
    cost += search(x1, x2);
    closed.clear();
    open.push( make_pair(x2, 0) );
    cost += search(x2, x1);
    cout <<maxCost - cost <<endl;
}

void resetDx(){
    for(int i = 0; i < MAX_N; i++){
        for(int j = 0; j < MAX_N; j++){
            dx[i][j][0] = -1;
            dx[i][j][1] = -1;
        }
    }
}

int search(int start, int goal){
    while(!open.empty()){
        int now = open.top().first;
        int cost = open.top().second;
        open.pop();
        for(int i = 1; i <= n; i++){
            if(dx[now][i][0] != -1) set(now, i, cost, dx[now][i][0]);
            if(dx[i][now][1] != -1) set(now, i, cost, dx[i][now][1]);
        }
    }
    return closed[goal];
}


void set(int now, int next, int nowCost, int plusCost){
    int sum = nowCost + plusCost;
    
    if((closed.find(next) == closed.end() || closed[next] > sum) && sum <= maxCost){
        open.push( make_pair(next, sum));
        closed[next] = sum;
    }
}