
#include <bits/stdc++.h>
#include <stdio.h>
#include <numeric>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repone(i,n) for(int i=1;i<(int)(n);++i)
#define repo(i,o,n) for(int i=o;i<(int)(n);++i)
#define Rep(j,n) for(int j=0;j<(int)(n);++j)
#define Repo(j,o,n) for(int j=o;j<(int)(n);++j)
#define Repone(j,n) for(int j=1;j<(int)(n);++j)
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define int long long
#define pb(a) push_back(a)
#define pbpair(a,b) push_back(make_pair(a,b))
#define MOD 1000000007
#define INF 9223372036854775807
#define pairint pair<int,int>
int gcd( int x, int y ){ return y ? gcd(y, x%y) : x; }
signed main() {
int x=0,y=0,z=0,w=0,n=0,m=0;
int a=0,b=0;
std::vector< pairint > v(6);
std::cin >> x>>y>>z;
if((x==1&&y==1)||z==1)std::cout << "Open" << '\n';
else std::cout << "Close" << '\n';
}

