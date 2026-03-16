#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;

int a[100][100],z[100][100],j = 0;

int solve(int x,int y){
  a[x][y]=0;

  for(int i=1;i<=3;i++){
    if(a[x+i][y] == 1 && x+i <= 8) solve(x+i,y);
    if(a[x][y+i] == 1 && y+i <= 8) solve(x,y+i);
    if(a[x-i][y] == 1 && x-i >= 1) solve(x-i,y);
    if(a[x][y-i] == 1 && y-i >= 1) solve(x,y-i);
  }
  return 0;
}
int main(){

  int n,x,y;
  char k;

  cin >> n;

  for(int p=1;p<=n;p++){

    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++){
	cin >> k;
	int t = k -'0';
	a[i][j] = t;
      }
    }
    cin >> y >> x;

    solve(x,y);

    cout << "Data " << p << ":" << endl;

    for(int i=1;i<=8;i++){
      for(int j=1;j<=8;j++) cout << a[i][j];
      cout << endl;
    }
  }
}