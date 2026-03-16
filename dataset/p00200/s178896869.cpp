#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


#define INF 999999999
int n,m;
int cost[200][200];
int tim[200][200];

int main(){
    while(cin>>n>>m){
        rep(i,200)rep(j,200) {
            cost[i][j]=INF;
            tim[i][j]=INF;
        }
        if(n==0&&m==0)break;
        rep(i,n){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            a--,b--;
            cost[a][b] = cost[b][a] = c;
            tim[a][b] = tim[b][a] = d;
        }
        rep(l,m){
            rep(i,m){
                rep(j,m){
                    cost[i][j] = min(cost[i][j],cost[i][l]+cost[l][j]);
                    tim[i][j]  = min(tim[i][j] ,tim[i][l] +tim[l][j] );
                }
            }
        }
        int k;
        cin>>k;
        rep(i,k){
            int a,b,c;
            cin>>a>>b>>c;
            a--,b--;
            if(c==0){
                cout<<cost[a][b]<<endl;
            }
            else cout<<tim[a][b]<<endl;
        }
    }
}