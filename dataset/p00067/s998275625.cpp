#include <iostream>
#include <string>
using namespace std;
char m[12][13];
int f(int y,int x){
  m[y][x]='0';
  if(x-1>=0&&m[y][x-1]=='1') f(y,x-1);
  if(y-1>=0&&m[y-1][x]=='1') f(y-1,x);
  if(x+1<12&&m[y][x+1]=='1') f(y,x+1);
  if(y+1<12&&m[y+1][x]=='1') f(y+1,x);
  return 0;
}
int main(){
  string s;
  while(1){
    int c=0;
    for(int i=0;i<12;++i){
      cin>>m[i];
    }
    for(int i=0;i<12;++i){
      for(int j=0;j<12;++j){
	if(m[i][j]=='1'){
	  f(i,j);
	  c++;
	}
      }
    }
    cout<<c<<endl;
    cin.ignore();
    if(getline(cin,s).eof()) break;
  }
  return 0;
}