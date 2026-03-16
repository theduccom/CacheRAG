#include<iostream>
using namespace std;
char b[10][10];
void bomb(int c,int d){
  b[c][d] = '0';
  for(int i=1;i<=3;i++){
    if(c+i<9&&b[c+i][d]=='1') bomb(c+i,d);
    if(c-i>0&&b[c-i][d]=='1') bomb(c-i,d);
    if(d+i<9&&b[c][d+i]=='1') bomb(c,d+i);
    if(d-i>0&&b[c][d-i]=='1') bomb(c,d-i);
  }
}
int main(){
  int n,x,y,count=1;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=1;j<=8;j++){
      for(int k=1;k<=8;k++) cin >> b[j][k];
    }
    cin >> x >> y;
    bomb(y,x);
    cout << "Data " << count << ':' << endl;
    count++;
    for(int j=1;j<=8;j++){
      for(int k=1;k<=8;k++){
	cout << b[j][k];
	if(k==8) cout << endl;
      }
    }
  }
  return 0;
}