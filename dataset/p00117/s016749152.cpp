#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int n,m;
int pass[30][30];

int dijk(int s,int g){
    int d[30];
    bool used[30];
    rep(i,30)d[i]=999999999;
    rep(i,30)used[i]=false;
    d[s]=0;
    
    while(1){
        int v=-1;
        rep(u,n){
            if( !used[u] && (v==-1||d[u]<d[v]) )v=u;
        }
        if(v==-1)break;
        
        used[v]=true;
        
        rep(u,n){
            d[u]=min(d[u],d[v]+pass[v][u]);
        }
        
    }
    return d[g];
}



int main(){
    rep(i,30)rep(j,30)pass[i][j]=999999999;
    cin>>n>>m;
    char ch;
    rep(i,m){
        int a,b,c,d;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        a--,b--;
        pass[a][b] = c;
        pass[b][a] = d;
    }
    int s,g,y1,y2;
    cin>>s>>ch>>g>>ch>>y1>>ch>>y2;
    s--,g--;

    
    int x,y;
    x=dijk(s,g);
    y=dijk(g,s);
    
    cout<<y1-y2-x-y<<endl;
}