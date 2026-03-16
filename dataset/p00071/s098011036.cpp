#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

string fie[8]={};


int main(){
    int n;
    cin>>n;
    rep(loop,n){
        int x,y;
        rep(i,8) cin>>fie[i];
        
        cin>>x>>y;
        x--;y--;
        queue<pii> que;
        que.push(pii(y,x));
        while(que.size()){
            int X=que.front().second;
            int Y=que.front().first;
            fie[Y][X]='0';
            que.pop();
            
            int dx[]={3,2,1, 0,0,0, -3,-2,-1, 0,0,0};
            int dy[]={0,0,0, 3,2,1, 0,0,0, -3,-2,-1};
            
            
            rep(i,12){
                if( 0<=Y+dy[i] && Y+dy[i]<8  &&  0<=X+dx[i] && X+dx[i]<8 ){
                    if(fie[ Y+dy[i] ][ X+dx[i] ]=='1'){
                        que.push(pii(Y+dy[i],X+dx[i]));
                    }
                }
            }
        }
        cout<<"Data "<<loop+1<<":"<<endl;
        rep(i,8){
            rep(j,8){
                cout<<fie[i][j];
            }
            cout<<endl;
        }

    }
}