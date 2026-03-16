#include<bits/stdc++.h>
using namespace std;
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
const int BA = 1000;
const int INFTY = (1<<21);
int xg,yg,w,h,gc;
int maps[101][101];
int solve(int ys,int xs);
int main(){
  int tate[2] = {2,4};
  int yoko[2] = {4,2};
  int xs,ys,n;
  int c[101],d[101],x[101],y[101];
  while(1){
    fill(maps[0],maps[101],0);
    cin >> w >> h;
    if(w==0 && h==0)break;
    cin >> xs >> ys >> xg >> yg >> n;
    xs--;ys--;xg--;yg--;
    for(int i=0;i<n;i++){
      cin >> c[i] >> d[i] >> x[i] >> y[i];
      x[i]--;y[i]--;
    }
    for(int i=0;i<n;i++){
      for(int j=y[i];j<y[i]+tate[d[i]];j++){
	for(int k=x[i];k<x[i]+yoko[d[i]];k++){
	  if(j == ys && k == xs)gc = c[i];
	  maps[j][k] = c[i];
	}
      }
    }
    /* for(int i=0;i<h;i++){
       for(int j=0;j<w;j++){
       cout << maps[i][j];
       }
       cout << endl;
       }*///マップ確認用
    if(solve(ys,xs))cout << "OK\n";
    else cout << "NG\n";
  }
}
int solve(int ys,int xs){
  if(xs < 0 || ys < 0 || xs > w-1 || ys > h-1 || maps[ys][xs] == 0 || maps[ys][xs] != gc){
    return 0;
  }
  else if(ys == yg && xs == xg){
    return 1;
  }
  maps[ys][xs] = 0;
  return solve(ys+1,xs) + solve(ys,xs+1)+ solve(ys-1,xs) + solve(ys,xs-1);
}