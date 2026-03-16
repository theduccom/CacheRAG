#include <cstdio>
#include <utility>
#include <map>
using namespace std;


int main(){
  map<char,int>  a;
  char x,y;
  a['A']=1;
  a['B']=a['C']=0;
  while(scanf("%c,%c",&x,&y)>0) swap(a[x],a[y]);
  for(int i=0;i<3;i++){
    if(a[(char)(i+'A')]==1){
      printf("%c\n",(char)(i+'A'));break;
    }
  }
  return 0;
}