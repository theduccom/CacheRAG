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
    string temp;
    while(cin>>temp){
        vector<string>tiya;
        vector<pii>gotiusa;
        tiya.push_back(temp);
    rep(i,7){
        string temp;
        cin>>temp;
        tiya.push_back(temp);
    }
    rep(i,8)rep(j,tiya[i].size())
        if(tiya[i][j]=='1')gotiusa.push_back(pii(7-i,j));
    int tate=0;
    int yoko=0;
    pii t=pii(-INF,INF),y=pii(-INF,INF);
    rep(i,gotiusa.size()){
        cmax(t.first,gotiusa[i].first);
        cmin(t.second,gotiusa[i].first);
        cmax(y.first,gotiusa[i].second);
        cmin(y.second,gotiusa[i].second);
    }
    tate=t.first-t.second;
    yoko=y.first-y.second;
    if(tate==3) puts("B");
    else if(yoko==3) puts("C");
    else if(yoko==1&&tate==1)puts("A");
    else if(tate==2&&yoko==1){
        int a = 0,b = 0;
        rep(i,gotiusa.size()){
            if(t.first==gotiusa[i].first)a=gotiusa[i].second;
            else if(t.second==gotiusa[i].first)b=gotiusa[i].second;
        }
            (a>b ? puts("D"):puts("F"));
    }
    else if(tate==1&&yoko==2){
        int a = 0,b = 0;
        rep(i,gotiusa.size()){
            if(y.first==gotiusa[i].second)a=gotiusa[i].first;
            else if(y.second==gotiusa[i].second)b=gotiusa[i].first;
        }
         (a>b ? puts("G"):puts("E"));
        }
    }
    return 0;
}