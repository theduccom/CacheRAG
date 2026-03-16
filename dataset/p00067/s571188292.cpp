#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(x) for(auto it=(x).begin();it!=(x).end();it++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
//#define MOD 1000000007
#define pb push_back
#define MP make_pair
#define PI 3.1415926535
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

string s[12];
void dfs(int y,int x){
    s[y][x]='0';
    rep(i,0,4){
        int ny=y+dy[i],nx=x+dx[i];
        if(0<=ny && 0<=nx && ny<12 && nx<12 && s[ny][nx]=='1'){
            dfs(ny,nx);
        }
    }
    return;
}

int main(){
    while(cin>>s[0]){
        int ans=0;
        rep(i,1,12)cin>>s[i];
        rep(i,0,12){
            rep(j,0,12){
                if(s[i][j]=='1'){
                    ans++;
                    dfs(i,j);
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}

