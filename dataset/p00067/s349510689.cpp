#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
string data[12];

void dfs(int y,int x){
    data[y][x]='0';
    
    int dx[]={0,1,0,-1};
    int dy[]={1,0,-1,0};
    rep(i,4){
        int ddx=x+dx[i],ddy=y+dy[i];
        if(ddx<0||ddy<0||ddx>=12||ddy>=12||data[ddy][ddx]!='1'){}
        else{
            dfs(ddy,ddx);
        }
    }
}


int main(){
    string s;
    while(cin>>s){
        data[0]=s;
        rep(i,11){
            cin>>data[i+1];
        }
        int c=0;
        rep(i,12){
            rep(j,12){
                if(data[i][j]=='1'){
                    dfs(i,j);
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}