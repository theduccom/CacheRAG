#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

#define loop(i,a,b) for(int i=(a);i<int(b);i++)
#define rep(i,b) loop(i,0,b)

typedef long long ll;
ll d[200][200];
ll e[200][200];
int main(){
    int n,m;
    while(cin>>n>>m && n){
        rep(i,200)rep(j,200)d[i][j]=1LL<<60;
        rep(i,200)d[i][i]=0;
        rep(i,200)rep(j,200)e[i][j]=1LL<<60;
        rep(i,200)e[i][i]=0;
        rep(i,n){
            ll a,b,c,c2;
            cin>>a>>b>>c>>c2;
            //printf("%lld %lld %lld %lld\n",a,b,c,c2);
            d[a][b]=d[b][a]=c;
            e[a][b]=e[b][a]=c2;
        }
        rep(k,200)rep(i,200)rep(j,200)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
        rep(k,200)rep(i,200)rep(j,200)e[i][j]=min(e[i][j],e[i][k]+e[k][j]);
        int k;cin>>k;
        rep(i,k){
            int p,q,r;
            cin>>p>>q>>r;
            auto t = r?e:d;
            cout << t[p][q] << endl;
        }
    }
}