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
    map<string,int>mp;
    map<string,vi>hoge;
    vector<string>v;
    string temp; int cnt;
    while(cin>>temp>>cnt){
        if(mp[temp]==0){v.push_back(temp);hoge[temp].push_back(cnt);mp[temp]++;}
        else{
            hoge[temp].push_back(cnt);
        }
    }
    sort(all(v));
    rep(i,v.size()){
        cout<<v[i]<<endl;
        sort(all(hoge[v[i]]));
        rep(j,hoge[v[i]].size())if(j)cout<<" "<<hoge[v[i]][j]; else cout<<hoge[v[i]][j];
        cout<<endl;
    }
}