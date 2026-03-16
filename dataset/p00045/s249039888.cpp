//Sum and Average
#include<bits/stdc++.h>
using namespace std;

int main(){
  int p, n, sp=0, sn=0, a=0;
  while(scanf("%d,%d", &p, &n)!=EOF){
    if(p==0)break;
    sp+=(p*n);
    sn+=n;
    a++;
  }
  printf("%d\n%d\n", sp, (int)round((double)sn/(double)a));
  return 0;
}