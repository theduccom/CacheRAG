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
typedef pair<int, int>PA;
using namespace std;
#define MAX 1000
int main(){
    int n=0,m=0,sn=0,sm=0; char g;int cnt=0;
    while(cin>>m>>g>>n){sn+=n;sm+=(m*n);cnt++;}
    cout<<sm<<endl;
    cout<<(int)(((double)sn/(double)cnt)+0.5)<<endl;
    return 0;
}