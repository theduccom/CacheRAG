#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int n,t[8][8];
string str;
 
int ch(int y,int x){
  if(0<=y&&y<=7&&0<=x&&x<=7)return t[y][x];
  return 0;
}
 
void bomb(int y,int x){
  t[y][x]=0;
  for(int i=0;i<=3;i++){
    if(ch(y+i,x)==1)bomb(y+i,x);
    if(ch(y-i,x)==1)bomb(y-i,x);
    if(ch(y,x+i)==1)bomb(y,x+i);
    if(ch(y,x-i)==1)bomb(y,x-i);
  }
}
 
int main(){
  int x,y;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<8;j++){
      cin>>str;
      for(int k=0;k<8;k++)t[j][k]=str[k]-'0';
    }
    cin>>x>>y;
    bomb(y-1,x-1);
    cout<<"Data "<<i+1<<':'<<endl;
    for(int j=0;j<8;j++){
      for(int k=0;k<8;k++){
    cout<<t[j][k];
      }
      cout<<endl;
    }
  }
 
  return 0;
}
