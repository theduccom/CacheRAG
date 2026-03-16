#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
    int n,m;
    int cost[30][30];
    while(cin>>n>>m){
        if(n==0&&m==0)break;
        rep(i,30)rep(j,30)cost[i][j]=999999999;
        rep(i,m){
            int a,b,c,d;
            char ch;
            cin>>a>>ch>>b>>ch>>c>>ch>>d;
            a--,b--;
            cost[a][b] = c;
            cost[b][a] = d;
        }
        rep(l,n){
            rep(i,n){
                rep(j,n){
                    cost[i][j]=min(cost[i][j],cost[i][l]+cost[l][j]);
                }
            }
        }
        int a,b,c,d;
        char ch;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        a--,b--;
        int sum=cost[a][b]+cost[b][a];
        cout<<c-d-sum<<endl;
    }
}