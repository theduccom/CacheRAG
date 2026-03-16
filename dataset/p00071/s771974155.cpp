#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <cstring>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)
inline int in(){ int x; scanf("%d",&x); return x;}

const int dx[] = {0,1,0,-1, 0,2,0,-2, 0,3,0,-3};
const int dy[] = {1,0,-1,0, 2,0,-2,0, -3,0,3,0};
vector<string> field;

void dfs(int y, int x){// cout << y << " " << x << endl;
    int i;

    field[y][x] = '0';
    rep(i,12){
        int my = y + dy[i];
        int mx = x + dx[i];
        if(my < 0 || mx < 0 || 8 <= mx || 8 <= my) continue;

        if(field[my][mx] == '1') dfs(my,mx);
        field[my][mx] = '0';
    }
}

int main(){
    int i,j,k;
    int pretty = 0;

    int n = in();
    while(n--){
        field.resize(8);
        rep(i,8) cin >> field[i];
        int x = in()-1, y = in()-1;

        dfs(y,x);

        cout << "Data " << ++pretty << ":" << endl;
        rep(i,8) cout << field[i] << endl;
        field.clear();
    }

    return 0;
}