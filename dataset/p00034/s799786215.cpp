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
#define vi vector<double>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000001
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
    int a;
    while(cin>>a){
        vi range; range.push_back(a);
        ll sum=0; sum+=a;
        rep(i,10){if(i){int gotiusa; cin>>gotiusa; range.push_back(gotiusa);sum+=gotiusa;}char gomi; cin>>gomi;}
        double v; cin>>v; v/=10; char gomi; cin>>gomi;
        double u; cin>>u; u/=10;
        double tiya=u,rize=v;
        bool touch=false;
        for(int i=0;;i++){
            if(v+u-(double)sum>=0)touch=true;
            if(touch)break;
            v+=rize;u+=tiya;
        }
        rep(i,range.size()){
            v-=range[i];
            if(v<=0){cout<<i+1<<endl; break;}
        }
    }
}