#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main() {
    int h,w;
    
    while(cin>>h>>w){
    if(h==0&&w==0)return 0;
    vector<vector<char>> v(h,vector<char>(w));
    vector<vector<bool>> f(h,vector<bool>(w,false));
    
    rep(i,0,h){
        rep(j,0,w){
            cin>>v[i][j];
        }
    }
    int x=0,y=0;
    
    while(!f[y][x]){
        
        f[y][x]=true;
        if(v[y][x]=='>')x++;
        else if(v[y][x]=='<')x--;
        else if(v[y][x]=='v')y++;
        else if(v[y][x]=='^')y--;
        else if(v[y][x]=='.'){
            cout<<x<<" "<<y<<endl;
            goto AWAY;
        }
        
        
    }
    if(f[y][x])cout<<"LOOP"<<endl;
    AWAY:;
    v.clear();
    f.clear();
    }
    
    return 0;
}


