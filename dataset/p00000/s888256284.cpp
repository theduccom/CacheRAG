#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>
#include <set>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <climits>
#include <fstream>
#include <bitset>
#include <time.h>

#define ll long long
#define VL vector<ll>
#define VI vector<int>
#define FOR(i,b) for(int i= 0; i<((int)b); ++i)
#define FOR_(i,a,b) for(int i= a; i<((int)b); ++i)
#define RFOR(i,a) for(int i=(a); i >= 0; --i)
#define FOE(i,a) for(auto i : a)
#define ALL(c) (c).begin(), (c).end()
#define RALL(c) (c).rbegin(), (c).rend()
#define COUT(x) cout << x << endl;
#define DUMP(x)  cerr << #x << " = " << (x) << endl;
#define SUM(x) std::accumulate(ALL(x), 0LL)
#define EPS 1e-14
#define DIM2(R,C,arr) vector<vector<int>> arr(R);FOR(i,R) (arr)[i].resize(C);
#define DIM2INIT(R,C,arr) FOR(i,R)FOR(j,C)arr[i][j]=0;
#define MAPGEN(R,C,visited,map) char map[R][C]; FOR(i,R){string s;cin>>s;FOR(j,C){visited[i][j]=0;map[i][j]=s[j];}}
#define Point pair<int,int>
#define POINT(x,y,arr) arr[y][x]
#define SORT(a)  sort(a.begin(),a.end());
using namespace std;







int main() {
    //*** ---------------------------------------------------------------------------*//
    //
    //                            Variables and Initialize
    //
    //*----------------------------------------------------------------------------- *//
    
    FOR_(i,1,10)FOR_(j,1,10)cout << i <<"x"<< j << "=" << i*j<<endl;
    
   
    
    
    return 0;
}