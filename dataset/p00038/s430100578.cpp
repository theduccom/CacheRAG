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
    char c; int x;
    int v[13]={};
    while(cin>>x){
        bool st=false;
    v[x-1]++;
    rep(i,1,5){
        cin>>c;
        cin>>x;
        v[x-1]++;
    }
    
    rep(i,0,10){
        bool str=true;
        rep(j,0,5){
            int ni=i+j;
            ni%=13;
            if(v[i]!=v[ni] || v[i]!=1)str=false;
        }
        if(str){
            cout<<"straight"<<endl;
            st=true;
        }
    }
    
    int two=0,three=0,four=0;
    rep(i,0,13){
        if(v[i]==2)two++;
        if(v[i]==3)three++;
        if(v[i]==4)four++;
    }
    
    if(four)cout<<"four card"<<endl;
    else if(two && three)cout<<"full house"<<endl;
    else if(three)cout<<"three card"<<endl;
    else if(two==2)cout<<"two pair"<<endl;
    else if(two)cout<<"one pair"<<endl;
    else if(!st)cout<<"null"<<endl;
    
    fill(v,v+13,0);
    }
    return 0;
}

