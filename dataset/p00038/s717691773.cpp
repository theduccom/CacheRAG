#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int p[5],c[14],p2,p3,p4;
  while(scanf("%d,%d,%d,%d,%d",p,p+1,p+2,p+3,p+4)!=EOF){
    for(int i=1;i<14;i++) c[i] = 0;
    p2 = 0;
    p3 = 0;
    p4 = 0;
    for(int i=0;i<5;i++) c[ p[i] ]++;
    for(int i=1;i<14;i++){
      if(c[i]==2) p2++;
      if(c[i]==3) p3++;
      if(c[i]==4) p4++;
    }
    if(p4 == 1) puts("four card");
    else if(p3 == 1){
      if(p2 == 1) puts("full house");
      else puts("three card");
    } else if(p2 == 2) puts("two pair");
    else if(p2 == 1) puts("one pair");
    else {
      sort(p,p+5);
      if(p[4]-p[0]==4||p[0]==1&&p[1]==10) puts("straight");
      else puts("null");
    }
  }
  return(0);
}

