#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string fie[20]={};


void dfs(int y,int x){
    fie[y][x]='0';
    int dx[]={1,0,-1,0};
    int dy[]={0,1,0,-1};
    rep(i,4){
        if( 0<=y+dy[i] && y+dy[i]<12  &&  0<=x+dx[i] && x+dx[i]<12  &&  fie[y+dy[i]][x+dx[i]]=='1' ){
            dfs(y+dy[i],x+dx[i]);
        }
    }
}

int main(){
    string s;
    while(cin>>s){
        fie[0]=s;
        for(int i=1;i<12;i++) cin>>fie[i];
        
        int c=0;
        rep(i,12){
            rep(j,12){
                if(fie[i][j]=='1'){
                    dfs(i,j);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}