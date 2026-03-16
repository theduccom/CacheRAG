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
#define loop(i,s,n) for(int i=s;i<s;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
using namespace std;
typedef pair<int,int> pii;
#define MAX 99999999
signed main(){
while(1){
	int n,m;
	cin>>n>>m;
    if(!(n+m))break;
	vector<vector<pii>>v(m+1,vector<pii>(m+1,pii(INF,INF)));
	rep(i,m+1)v[i][i]=pii(0,0);
	rep(i,n){
		pii temp;
		int s,g;
		cin>>s>>g>>temp.first>>temp.second;
        v[--s][--g]=temp;
	}
    n=m;
    rep(k,n){
        rep(i,n){
            rep(j,n){
                v[i][j].first=min(v[i][k].first+v[k][j].first,v[i][j].first);
                v[i][j].second=min(v[i][k].second+v[k][j].second,v[i][j].second);
                v[j][i]=v[i][j];

            }
        }
    }
    int k; cin>>k;
    rep(i,k){
        int s,g,r; cin>>s>>g>>r;
        if(!r)cout<<v[--s][--g].first<<endl;
        else cout<<v[--s][--g].second<<endl;
    }
    
    }
}

	