#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

string fld[12];

bool vis[12][12];
void dfs(int y,int x){
    vis[y][x]=true;
    rep(i,4){
        int ny=y+dy[i],nx=x+dx[i];
        if(ny<0||ny>=12||nx<0||nx>=12||fld[ny][nx]!='1'||vis[ny][nx])continue;
        dfs(ny,nx);
    }
}
signed main(){
    while(cin>>fld[0]){
        for(int i=1;i<12;i++)cin>>fld[i];
        memset(vis,0,sizeof(vis));

        int ans=0;
        rep(i,12)rep(j,12){
            if(fld[i][j]!='1'||vis[i][j])continue;
            dfs(i,j);
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}