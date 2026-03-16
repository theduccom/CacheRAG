#include <bits/stdc++.h>
typedef long long LL;
#define SORT(c) sort((c).begin(),(c).end())

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

using namespace std;
vector<string> field;
int y,x;
bool solve(void){
  for(;;){
    if(field[y][x]=='l') return false;
    if(field[y][x]=='.') return true;
    if(field[y][x]=='^') field[y--][x]='l';
    if(field[y][x]=='v') field[y++][x]='l';
    if(field[y][x]=='<') field[y][x--]='l';
    if(field[y][x]=='>') field[y][x++]='l';
  }
}   
int main(void)
{
  for(;;){
    int h,w;
    cin >> h >> w;
    if(!h&&!w) return 0;
    y=0; x=0;
    field.resize(h);
    REP(i,h) cin >> field[i];
    if(solve()) cout << x << ' ' << y << endl;
    else cout << "LOOP" << endl;
  }
}