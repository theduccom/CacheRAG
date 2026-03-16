#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)

map<vector<int>,int> mp;

int main(){
    vector<int> ans(8);
    rep(i,8)ans[i]=i;

    queue<vector<int>> que;
    que.push(ans);
    mp[ans] = 0;
    
    while(que.size()){
        vector<int> q = que.front();
        que.pop();
        int x,y;
        rep(i,8)if(q[i]==0){
            y = i/4;
            x = i%4;
        }
        int dy[]={1,0,-1,0};
        int dx[]={0,1,0,-1};
        
        rep(i,4){
            int ddy = y + dy[i];
            int ddx = x + dx[i];
            if(ddy<0||ddx<0||ddy>=2||ddx>=4)continue;
            vector<int> t = q;
            swap(t[4*ddy + ddx],t[4*y + x]);
            
            if(mp.count(t)!=0)continue;
            que.push(t);
            mp[t]=mp[q]+1;
        }
    }
    
    vector<int> v(8);
    while(cin>>v[0]){
        rep(i,7)cin>>v[i+1];

        cout<<mp[v]<<endl;
    }
}