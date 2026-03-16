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
int n,m;
int V; // number of Vertex
int s,G;// number of start
vector<pii>g[10000]; // first: to second: cost
vi d(1000,INF); // start->index  mminimum distance
void dijkstra(){
    priority_queue<pii,vector<pii>,greater<pii>>que;
    d[s]=0;
    que.push(pii(0,s));
    while(!que.empty()){
    pii now=que.top(); que.pop();
        int v=now.second;
        if(d[v]<now.first)continue;
        for(int i=0; i<g[v].size();i++){
            pii e=g[v][i];
            if(d[e.first]>d[v]+e.second){
                d[e.first]=d[v]+e.second;
                que.push(pii(d[e.first],e.first));
            }
        }
    }
}
int main(){
    cin>>V>>m;
    rep(i,m){
        int to,from,tiya,rize;
        char gomi; cin>>from>>gomi>>to>>gomi>>tiya>>gomi>>rize;
        g[from].push_back(pii(to,tiya));
        g[to].push_back(pii(from,rize));
    }
    int gotiusa,amausa;
    char gomi;
    cin>>s>>gomi>>G>>gomi>>gotiusa>>gomi>>amausa;
    dijkstra();
    int rize=d[G];
    int hoge=s;
    swap(s,G);
    vi yebi(1000,INF);
    d=yebi;
    dijkstra();
    cout<<gotiusa-amausa-rize-d[G]<<endl;
}