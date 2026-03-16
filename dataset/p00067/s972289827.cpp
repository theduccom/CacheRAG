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

const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};
vector<string> field;

void dfs(int y, int x){// cout << y << " " << x << endl;
    int i;

    rep(i,4){
        int my = y + dy[i];
        int mx = x + dx[i];
        if(my < 0 || mx < 0 || 12 <= my || 12 <= mx) continue;
        if(field[my][mx] == '1'){
            field[my][mx] = '0';
            dfs(my,mx);
        }
    }
}

int main(){
    int i,j,k;
    int n = 12;
    int cnt = 0;
    string in;

    while(cin >> in){
        cnt++;
//        cout << cnt << endl;
        if(cnt % 12 != 0){
            field.push_back(in);
            continue;
        }
        field.push_back(in);
//        rep(i,field.size()) cout << field[i] << endl;

        int res = 0;
        rep(i,n) rep(j,n){
            if(field[i][j] == '1'){
 //               cout << "go to dfs" << endl;
                res++;
                dfs(i,j);
            }
        }
        printf("%d\n",res);
        field.clear();
    }

  return 0;
}