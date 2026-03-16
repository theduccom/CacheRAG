#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#include<complex>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
#define bv vector<bool>
using namespace std;
typedef pair<int, int> PI;
#define MAX 99999999
int mx[]={1,2,3,-1,-2,-3,0,0,0,0,0,0};
int my[]={0,0,0,0,0,0,1,2,3,-1,-2,-3};
vvi v(9,vi(9,0));
void dfs(int y,int x){
    if(!v[y][x])return;
    v[y][x]=0;
    rep(i,12){
        int tx=x+mx[i]; int ty=y+my[i];
        if(0<=tx&&tx<8&&0<=ty&&ty<8){
           if(v[ty][tx]==1) dfs(ty,tx);
        }
    }
    return ;
}
int main(){
    int n; cin>>n;
    rep(Q,n){
        char c;
        rep(i,8){rep(j,8){cin>>c;v[i][j]=atoi(&c);}}
        int x,y;cin>>x>>y;
        dfs(--y,--x);
        cout<<"Data "<<Q+1<<":"<<endl;
        rep(i,8){rep(j,8)cout<<v[i][j];cout<<endl;}
    }
}