#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int a[1000][1000];
int xg,yg,w,h,ans;

void solve(int xs,int ys){

  if(xs == xg && ys == yg){
    ans = 1;
    return;
  }

  if(a[ys][xs] != a[yg][xg]) return;
  a[ys][xs] = 100;

  if(xs+1 <= w) solve(xs+1,ys);
  if(ys+1 <= h) solve(xs,ys+1);
  if(xs-1 > 0) solve(xs-1,ys);
  if(ys-1 > 0) solve(xs,ys-1);

}

int main(){

  int xs,ys;
  int n;

  while(1){
    cin >> w >> h;
    if(!w && !h) break;
    cin >> xs >> ys >> xg >> yg >> n;

    memset(a,0,sizeof(a));
    ans = 0;

    int c,d,x,y;

    for(int i=0;i<n;i++){
      cin >> c >> d >> x >> y;

      if(d == 0){
	for(int j=0;j<4;j++){
	  a[y][x+j] = c;
	  a[y+1][x+j] = c;
	}
      }

      else if(d == 1){
	for(int j=0;j<4;j++){
	  a[y+j][x] = c;
	  a[y+j][x+1] =c ;
	}
      }
    }

    solve(xs,ys);

    if(ans == 1) cout << "OK" << endl;
    else cout << "NG" << endl;
  }
}