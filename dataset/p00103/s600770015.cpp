#include <stdio.h>
#include <string>

using namespace std;

int main(){
  int n;
  scanf("%d", &n);
  int c,o,r1,r2,r3;
  char event[16];
  for(int i=0;i<n;i++){
    c=o=r1=r2=r3=0;
    while(o!=3){
      scanf("%s", event);
      string e(event);
      if(e == "HIT"){
        c+=r3;
        r3=r2;r2=r1;r1=1;
      }else if(e == "HOMERUN"){
        c+=r3+r2+r1+1;
        r3=r2=r1=0;
      }else{
        o++;
      }
    }
    printf("%d\n", c);
  }
  return 0;
}