#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <deque>
#include <queue>
#include <tuple>
#include <queue>
#include <functional>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#include <iterator>
#include <array>
#include <memory>
#include <stack>
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
#define loop(i,s,n) for(int i=s;i<n;i++)
#define all(in) in.begin(), in.end()
template<class T, class S> void cmin(T &a, const S &b) { if (a > b)a = b; }
template<class T, class S> void cmax(T &a, const S &b) { if (a < b)a = b; }
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
typedef pair<double,double>pdd;
typedef pair<ll,ll>pll;
int main(){
    int n,m;
    while(cin>>n>>m,n+m){
        vector<vector<pii>>d(m+1,vector<pii>(m+1,pii(INF,INF)));
        for(int i=0;i<m;i++)d[i][i]=pii(0,0);
        rep(i,n){
            int a = 0,b = 0;pii hoge; cin>>a>>b>>hoge.first>>hoge.second;
            --a,--b;
            d[a][b]=hoge;
            d[b][a]=hoge;
        }
        rep(k,m)rep(i,m)rep(j,m)cmin(d[i][j].first,d[i][k].first+d[k][j].first);
        rep(k,m)rep(i,m)rep(j,m)cmin(d[i][j].second,d[i][k].second+d[k][j].second);
        int k; cin>>k;
        rep(i,k){
            int to,from,q; cin>>to>>from>>q;
            to--,from--;
            if(q)cout<<d[to][from].second<<endl;
            else cout<<d[to][from].first<<endl;
        }
    }
}