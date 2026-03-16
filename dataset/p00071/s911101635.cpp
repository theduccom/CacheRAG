#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
string s[8];

void bomb(int x , int y){
  s[x][y]='0';
  for(int i = -3; i <= 3 ; i++){
    if(x+i>=0 && x+i<8 && s[x+i][y]=='1') {
      s[x+i][y]='0';
      bomb(x+i,y);
    }
    if(y+i>=0 && y+i<8 && s[x][y+i]=='1'){
      s[x][y+i]='0';
      bomb(x,y+i);
    } 
  }
}

int main(){
  int n;
  cin>>n;
  cin.ignore();
  for(int i = 0;i < n;i++){
    for(int j = 0; j < 8;j++)cin>>s[j];
    cin.ignore();
    int x,y;
    cin>>x>>y;
    bomb(y-1,x-1);
    printf("Data %d:\n",i+1);
    for(int j = 0; j < 8;j++)cout<<s[j]<<endl;
  }
}