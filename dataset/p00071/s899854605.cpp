#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int dx[]={-3,-2,-1,0,0,0,1,2,3,0,0,0};
int dy[]={0,0,0,1,2,3,0,0,0,-1,-2,-3};
char mas[8][8];
void solve(int,int);
int main(){
  int n,x,y,HM=1;
  cin >> n;
  while(n--){
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cin >> mas[i][j];
      }
    }
    cin >> y >> x;
    solve(x-1,y-1);
    cout << "Data " << HM << ":" << endl;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cout << mas[i][j];
      }
      cout << endl;
    }
    HM++;
  }
}
void solve(int x,int y){
  mas[x][y]='0';
  for(int i=0;i<12;i++){
    int nx=dx[i]+x,ny=dy[i]+y;
    if(nx>=0&&nx<8&&ny>=0&&ny<8&&mas[nx][ny]=='1'){
      solve(nx,ny);
    }
  }
}