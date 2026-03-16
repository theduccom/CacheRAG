/*#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <numeric>
*/
#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define rrep()
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main(){
    int a;
    char c;
    string s;
    int v[4]={};
    
    while(cin>>a>>c>>s){
        if(s=="A")v[0]++;
        else if(s=="B")v[1]++;
        else if(s=="AB")v[2]++;
        else v[3]++;
    }
    rep(i,0,4)cout<<v[i]<<endl;
    
    
    
    return 0;
}

