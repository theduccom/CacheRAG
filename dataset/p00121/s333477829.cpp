/*
P135
AOJ 0558 Cheese
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0558
*/
 
 
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <functional>
#include <string.h>
using namespace std;
 
 
int dx[] = {0, 1, 0, -1, 0};
int dy[] = {1, 0, -1, 0, 0};
 
int num;
int pos0;
typedef pair<int,int> PAIR;
map<int, int> mp;
 
int pow10[8] = {1,10,100,1000,10000,100000,1000000,10000000};
 
bool check(int x, int y)
{
    return (x>=0&&x<2 && y>=0 && y<4);
}
 
 
 
bool read()
{
    num = 0;
    int x;
    for(int i=0; i<8; ++i){
        if(scanf("%d", &x) == EOF) return false;
        num *= 10;
        num += x;
    }
    return true;
}
 
 
int swapPos(int n, const int& p0, const int& p2){
    int d = n / pow10[7-p2] % 10;
    n -= d * pow10[7-p2];
    n += d * pow10[7-p0];
    return n;
}
 
 
void bfs(){
    queue<PAIR> q;
    mp[1234567] = 0;
    q.push(make_pair(1234567, 0));
 
    while(!q.empty()){
        PAIR cur = q.front(); q.pop();
        int curNum = cur.first;
        int p0 = cur.second;
        int step = mp[curNum];
        int x = p0>>2, y = p0&3;
 
        for(int d=0; d<4; ++d){
            int cx = x + dx[d], cy = y + dy[d];
            if(check(cx, cy)){
                int cn = (cx*4 + cy);
                int v = swapPos(curNum, p0, cn);
                if(!mp.count(v)) {
                    mp[v] = step+1;
                    q.push(make_pair(v, cn));
                }
            }
        }
    }
}
 
 
void solve()
{
    printf("%d\n", mp[num]);
}
 
int main()
{
    bfs();
    while(read())
        solve();
 
}
 
 
 
 
/*
int W, H;
char board[110][110];
int a[10];
bool read()
{
    for(int i=0; i<10; ++i)
        scanf("%d", a+i);
}
 
bool isVisited[110][110];
int step;
 
void dfs(int x, int y, char c){
    if(x<0 || x>=H || y<0 || y>=W) return;
    if(board[x][y]!=c) return;
    if(isVisited[x][y]) return;
    isVisited[x][y] = true;
    dfs(x+1, y, c);
    dfs(x-1, y, c);
    dfs(x, y+1, c);
    dfs(x, y-1, c);
}
 
 
 
void solve1()
{
    int x1=0, x2=0;
    bool ans = true;
    for(int i=0; i<10; ++i)
    {
        if(x1 < x2) swap(x1, x2);
        if(x1 < a[i]) x1 = a[i];
        else if(x2 < a[i]) x2 = a[i];
        else {ans = false; break;}
    }
    if(ans) printf("YES\n");
    else printf("NO");
}
 
 
 
vector<int> L_bucket;
vector<int> R_bucket;
 
bool dfs2(int d){
    if(d == 10) return true;
    bool flag;
    if(L_bucket.size() == 0 || L_bucket.back() < a[d]){
        L_bucket.push_back(a[d]);
        flag = dfs2(d+1);
        L_bucket.pop_back();
    }
    if(flag) return true;
    if(R_bucket.size() == 0 || R_bucket.back() < a[d]){
        R_bucket.push_back((a[d]));
        flag = dfs2(d+1);
        R_bucket.pop_back();
    }
    if(flag) return true;
    return false;
 
}
 
void solve2()
{
    if(dfs2(0))
        printf("YES\n");
    else printf("NO\n");
}
 
int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        read();
        solve2();
    }
}
*/