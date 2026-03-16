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

string s[8];
void solve(int y,int x){
    s[y][x]='0';
    rep(i,1,4){
        int ny=y+i;
        if(0<=ny && ny<=7 && s[ny][x]=='1'){
            solve(ny,x);
        }
    }
    
    rep(i,1,4){
        int ny=y-i;
        if(0<=ny && ny<=7 && s[ny][x]=='1'){
            solve(ny,x);
        }
    }
    
    rep(i,1,4){
        int nx=x+i;
        if(0<=nx && nx<=7 && s[y][nx]=='1'){
            solve(y,nx);
        }
    }
    
    rep(i,1,4){
        int nx=x-i;
        if(0<=nx && nx<=7 && s[y][nx]=='1'){
            solve(y,nx);
        }
    }
}

int main(){
    int n;
    cin>>n;
    
    rep(p,0,n){
        cout<<"Data "+to_string(p+1)+":"<<endl;
        int x,y;
        rep(i,0,8)cin>>s[i];
        cin>>x>>y;
        
        solve(y-1,x-1);
        rep(i,0,8){
            rep(j,0,8){
                cout<<s[i][j];
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}

