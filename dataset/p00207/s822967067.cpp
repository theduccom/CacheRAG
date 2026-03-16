#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back


int fie[200][200];
int color;
int w,h;
int sx,sy,gx,gy,n;

void dfs(int y,int x){
    int dx[]={1,0,-1,0};
    int dy[]={0,1,0,-1};
    fie[y][x]=9;
    
    rep(i,4){
        if( 0<=x+dx[i] && x+dx[i]<w  &&  0<=y+dy[i] && y+dy[i]<h  &&  fie[ y+dy[i] ][ x+dx[i] ]==color ){
            dfs(y+dy[i],x+dx[i]);
        }
    }
}



int main(){
    while(cin>>w>>h){
        if(w==0&&h==0)break;
        rep(i,200)rep(j,200)fie[i][j]=0;
        
        cin>>sx>>sy>>gx>>gy>>n;
        sx--,sy--,gx--,gy--;
        rep(i,n){
            int c,d,x,y;
            cin>>c>>d>>x>>y;
            x--,y--;
            
            if(d==0){
                int dx[]={0,0,1,1,2,2,3,3};
                int dy[]={0,1,0,1,0,1,0,1};
                rep(i,8) fie[y+dy[i]][x+dx[i]]=c;
            }else{
                int dx[]={0,1,0,1,0,1,0,1};
                int dy[]={0,0,1,1,2,2,3,3};
                rep(i,8) fie[y+dy[i]][x+dx[i]]=c;
            }
        }
        
        color=fie[sy][sx];
        dfs(sy,sx);
        if(fie[gy][gx]==9)cout<<"OK"<<endl;
        else cout<<"NG"<<endl;

    }
}