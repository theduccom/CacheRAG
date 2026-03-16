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
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
using namespace std;
typedef pair<int, int> pii;
#define MAX 99999999
int main(){
    double a,ans=0;
    while(cin>>a){
        vector<ld>v(11,0);
        loop(i,1,11){
            if(i==1){v[1]=a;ans=a;}
            else if(i%2){
                v[i]=v[i-1]/3;
                ans+=v[i];
            }else {
                v[i]=v[i-1]*2;
                ans+=v[i];
            }
        }
        printf("%6lf\n",ans);
    }
}