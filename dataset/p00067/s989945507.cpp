#include <iostream>
#include <string>
using namespace std;
string is[14];
void dfs(int i,int j){
  is[i][j]='0';
  if(is[i+1][j]=='1')dfs(i+1,j);
  if(is[i][j+1]=='1')dfs(i,j+1);
  if(is[i-1][j]=='1')dfs(i-1,j);
  if(is[i][j-1]=='1')dfs(i,j-1);
}

int main(){
  string s;
  int k;
  is[0]="000000000000";
  is[13]="000000000000";
  while(cin>>s){
    s='0'+s+'0';
    is[1]=s;
    for(int i=2;i<=12;i++){
      cin>>s;
      s='0'+s;
      is[i]=s+'0';
    }
    k=0;
    for(int i=1;i<=12;i++){
      for(int j=1;j<=12;j++){
	if(is[i][j]=='1'){
	  k++;
	  dfs(i,j);
	}
      }
    }
    cout<<k<<endl;
  }
  return 0;
}