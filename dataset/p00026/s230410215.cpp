#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int fie[20][20]={};


void paint(int x,int y,int size){
    int dx[]={0,1,0,-1,0, 1,1,-1,-1, 2,0,-2,0};
    int dy[]={0,0,1,0,-1, 1,-1,1,-1, 0,2,0,-2};
    int n;
    if(size==1)n=5;
    else if(size==2)n=9;
    else if(size==3)n=13;
    
    rep(i,n){
        if( 0<=x+dx[i] && x+dx[i]<10  &&  0<=y+dy[i] && y+dy[i]<10 ){
            fie[ x+dx[i] ][ y+dy[i] ]++;
        }
    }
}



int main(){
    int x,y,size;
    char ch;
    while(cin>>x>>ch>>y>>ch>>size){
        paint(x,y,size);
    }
    
    int c=0;
    int maxi=-1;
    rep(i,10){
        rep(j,10){
            if(fie[i][j]==0)c++;
            maxi = max(maxi,fie[i][j]);
        }
    }
    cout<<c<<endl;
    cout<<maxi<<endl;
}