#include<iostream>
using namespace std;
int n,t[8][8];
string str;

int tt(int y,int x){
  if(0<=y&&y<=7&&0<=x&&x<=7)return t[y][x];
  return 0;
}

void rec(int y,int x){
  t[y][x]=0;
  for(int i=0;i<=3;i++){
    if(tt(y+i,x)==1)rec(y+i,x);
    if(tt(y-i,x)==1)rec(y-i,x);
    if(tt(y,x+i)==1)rec(y,x+i);
    if(tt(y,x-i)==1)rec(y,x-i);
  }
}

int main(){
  int x,y;
  cin>>n;
  for(int I=1;I<=n;I++){
    for(int i=0;i<8;i++){
      cin>>str;
      for(int j=0;j<8;j++)t[i][j]=str[j]-'0';
    }
    cin>>x>>y;
    rec(y-1,x-1);
    cout<<"Data "<<I<<':'<<endl;
    for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
	cout<<t[i][j];
      }
      cout<<endl;
    }
  }

  return 0;
}