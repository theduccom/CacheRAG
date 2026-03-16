#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[15][15]={0},b=0,c=0,x,y,t;
  string s[50];
  while(scanf("%d,%d,%d",&x,&y,&t)!=EOF){
    if(t==3){a[x+2][y+2]++;a[x+1][y+2]++;a[x][y+2]++;a[x+3][y+2]++;a[x+4][y+2]++;a[x+2][y+1]++;a[x+2][y]++;a[x+2][y+3]++;a[x+2][y+4]++;a[x+3][y+3]++;a[x+3][y+1]++;a[x+1][y+3]++;a[x+1][y+1]++;}
    else if(t==2){a[x+2][y+2]++;a[x+1][y+2]++;a[x+3][y+2]++;a[x+2][y+1]++;a[x+2][y+3]++;a[x+3][y+3]++;a[x+3][y+1]++;a[x+1][y+3]++;a[x+1][y+1]++;}
    else {a[x+2][y+2]++;a[x+1][y+2]++;a[x+3][y+2]++;a[x+2][y+1]++;a[x+2][y+3]++;}
  }
  for(int i=2;i<12;i++){
    for(int j=2;j<12;j++){
      if(!a[i][j])c++;
      b=max(b,a[i][j]);
    }
  }
  cout<<c<<endl<<b<<endl;
}