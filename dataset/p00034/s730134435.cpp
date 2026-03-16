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

int gcd(int a,int b){
    if(a<b)swap(a,b);
    int k=a%b;
    while(k!=0){
        a=b;
        b=k;
        k=a%b;
    }
}

int lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

int main(){
    char c;
    int v[10];
    while(cin>>v[0]>>c){
    double sum=0;
    rep(i,1,10){
        cin>>v[i]>>c;
        if(i)v[i]+=v[i-1];
    }
    
    double a,b;
    sum=v[9];
    cin>>a; cin>>c; cin>>b;
    sum*=a/(a+b);
    rep(i,0,10){
        if(sum<=v[i]){
            cout<<i+1<<endl;
            break; 
        }
    }
    }
    return 0;
}

