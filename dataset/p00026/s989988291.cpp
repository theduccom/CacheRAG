#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
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

ll gcd(ll a,ll b){
    if(a<b){
        int t=a;a=b;b=t;
    }
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return true;
}

vector<vector<int>> v;
void calc1(int x,int y){
    rep(i,0,4){
        int nx=x+dx[i],ny=y+dy[i];
        if(0<=nx&&0<=ny&&nx<10&&ny<10)v[ny][nx]++;
    }
}

void calc2(int x,int y){
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(i!=0||j!=0){
                int nx=x+i,ny=y+j;
                if(0<=nx&&0<=ny&&nx<10&&ny<10)v[ny][nx]++;
            }
        }
    }
}

void calc3(int x,int y){
    calc2(x,y);
    rep(i,0,4){
        int nx=x+dx[i]*2,ny=y+dy[i]*2;
        if(0<=nx&&0<=ny&&nx<10&&ny<10)v[ny][nx]++;
    }
    
}
int main() {
    v.resize(10,vector<int>(10,0));
    int x,y,mode;
    char c;
    while(cin>>x>>c>>y>>c>>mode){
        if(mode==1)calc1(x,y);
        else if(mode==2)calc2(x,y);
        else if(mode==3)calc3(x,y);
        
        v[y][x]++;
    }
    
    int blank=0,ma=-INF;
    rep(i,0,10){
        rep(j,0,10){
            if(v[i][j]==0)blank++;
            ma=max(ma,v[i][j]);
        }
    }
    cout<<blank<<endl<<ma<<endl;
    
  
    return 0;
}

