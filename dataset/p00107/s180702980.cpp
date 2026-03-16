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
#include<map>
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
#define MAX 9999999
using namespace std;
typedef pair<int, int> pii;
int main(){
    vl a(3); vector<string>ans;
    int n; ll r;
    while(cin>>a[0]>>a[1]>>a[2],a[0]+a[1]+a[2]){
        cin>>n;
        rep(i,n){
            cin>>r;
            sort(all(a));
            ll temp=a[0]*a[0]+a[1]*a[1];
            if((r*2)*(r*2)>temp)ans.push_back("OK");
            else ans.push_back("NA");
        }
    }
    rep(i,ans.size())cout<<ans[i]<<endl;
}