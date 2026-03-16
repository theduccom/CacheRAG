#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <cmath>
#include <map> 
#include <sstream>
#include <cstdio>
using namespace std;
 
const int MAX= 10000100;

#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) loop(i,0,a)
#define all(a) (a).begin(),(a).end()
#define ll long long int
#define gcd(a,b) __gcd(a,b)
#define pb(a) push_back(a)
int GCD(int a, int b) {if(!b) return a; return gcd(b, a%b);}
int lcm(int a, int b) {return a*b / gcd(a, b);}

char in[8][8];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

void dfs(int x,int y){
  in[y][x] = '0';
  rep(i,4){
    loop(j,1,4){
      int nx = x + dx[i] * j;
      int ny = y + dy[i] * j;
      if(nx < 0 || 8 <= nx)break;
      if(ny < 0 || 8 <= ny)break;
      if(in[ny][nx] == '1')dfs(nx,ny);
    }
  }
}

int main(void){
  int n;
  cin>>n;
  rep(i,n){
    rep(j,8)rep(k,8)cin>>in[j][k];
    int x,y;
    cin>>x>>y;
    dfs(--x,--y);

    cout<<"Data " << (i+1) << ":" <<endl;

    rep(j,8){
      rep(k,8)cout<<in[j][k];
      cout<<endl;
    }
  }

}