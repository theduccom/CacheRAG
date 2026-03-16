#include <functional>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <iomanip>
#include <utility>
#include <cstdlib>
#include <sstream>
#include <bitset>
#include <vector>
#include <cstdio>
#include <ctime>
#include <queue>
#include <deque>
#include <cmath>
#include <stack>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

char data[8][8]={};

int d[]={-3,-2,-1,1,2,3};
void dfs(int x,int y){
    data[y][x]='0';
    rep(i,6){
        if(x+d[i]<8 && 0<=x+d[i] && data[y][x+d[i]]=='1')dfs(x+d[i],y);
    }
    rep(i,6){
        if(y+d[i]<8 && 0<=y+d[i] && data[y+d[i]][x]=='1')dfs(x,y+d[i]);
    }
}

int main() {
    int n;
    cin>>n;
    rep(i,n){
        rep(i,8) rep(j,8) cin>>data[i][j];
        
        int x,y;
        cin>>x>>y;
        x--,y--;
        
        dfs(x,y);
        
        cout<<"Data "<<i+1<<":"<<endl;
        rep(i,8){
            rep(j,8){
                cout<<data[i][j];
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}