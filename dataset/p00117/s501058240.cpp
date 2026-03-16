#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <typeinfo>
#include <map>
#define INF 100000000
#define rep(i,a) for(int i=0;i<(a);i++)

using namespace std;
typedef long long ll;

int data[30][30]={};
int n;


void wf(){
    rep(k,n){
        rep(i,n){
            rep(j,n){
                data[i][j]=min(data[i][j] , data[i][k]+data[k][j]);
            }
        }
    }
}

int main(){
    rep(i,20){
        rep(j,20){
            if(i==j)data[i][j]=0;
            else data[i][j]=INF;
        }
    }
    char ch;

    cin>>n;
    int m;
    cin>>m;
    rep(i,m){
        int a,b,c,d;
        cin>>a>>ch>>b>>ch>>c>>ch>>d;
        a--;b--;
        data[a][b]=c;
        data[b][a]=d;
    }
    int x1,x2,y1,y2;
    cin>>x1>>ch>>x2>>ch>>y1>>ch>>y2;
/*
 x1：大工の出発する町の番号
 x2：柱のある山里の番号
 y1：殿様から大工が受け取ったお金
 y2：柱の代金
 */
    wf();
    cout<<y1-y2-data[x1-1][x2-1]-data[x2-1][x1-1]<<endl;
    
    
    return 0;
 }