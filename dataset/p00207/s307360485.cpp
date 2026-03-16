#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<complex>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int w,h;
  while(cin>>w>>h,w+h){
    int xs,ys,xg,yg;
    bool Map[h+10][w+10]={};
    bool flag=false;
    cin>>xs>>ys>>xg>>yg;
    xs--;ys--;xg--;yg--;
    int n;cin>>n;
    int Map2[h+10][w+10]={};
    Map[ys][xs]=true;
    queue<pair<int,int> >que;
    que.push(mp(ys,xs));
    for(int i=0;i<n;i++){
      int c,d,x,y;
      cin>>c>>d>>x>>y;
      x--;y--;
      if(d==0){
	for(int i=y;i<y+2;i++)
	  for(int j=x;j<x+4;j++)
	    Map2[i][j]=c;
      }else if(d==1){
	for(int i=y;i<y+4;i++)
	  for(int j=x;j<x+2;j++)
	    Map2[i][j]=c;
      }
    }
    int vx[4]={0,-1,0,1};
    int vy[4]={1,0,-1,0};
    while(!que.empty()){
      pair<int,int>now=que.front();
      que.pop();
      if(now.F==yg&&now.S==xg){
	flag=true;
	break;
      }
      for(int kk=0;kk<4;kk++){
	int as=now.F+vx[kk];int bs=now.S+vy[kk];
	if(as<h&&as>=0&&bs<w&&bs>=0&&Map2[now.F][now.S]==Map2[as][bs]&&!Map[as][bs]){
	  que.push(mp(as,bs));
	  Map[as][bs]=true;
	}
      }
    }
    if(flag)
      cout<<"OK"<<endl;
    else
      cout<<"NG"<<endl;
  }
  return 0;
}