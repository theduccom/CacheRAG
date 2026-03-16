#include <iostream>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int a;
string s[12];
void dfs(int y,int x){
  s[y][x]='0';
  if(y+1<12&&s[y+1][x]=='1')dfs(y+1,x);
  if(y-1>=0&&s[y-1][x]=='1')dfs(y-1,x);
  if(x+1<12&&s[y][x+1]=='1')dfs(y,x+1);
  if(x-1>=0&&s[y][x-1]=='1')dfs(y,x-1);
}
int main(){
  while(cin>>s[0]){
    a=0;
  r(i,11)cin>>s[i+1];
  r(i,12)r(j,12)if(s[i][j]=='1'){dfs(i,j);a++;}
  cout<<a<<endl;
    }
}