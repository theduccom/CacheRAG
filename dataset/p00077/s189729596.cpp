#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char c,cc;
  while(scanf("%c",&c)!=-1){
    if(c=='@'){
      cin>>c>>cc;
      for(int i=0;i<c-'0';i++){
	cout<<cc;
      }
	
    }else cout<<c;
  }
  return 0;
}