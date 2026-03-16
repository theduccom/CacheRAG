#include <bits/stdc++.h>
using namespace std;
int main(){
  int l[10],v1,v2,len,point,now;
  while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2)!=EOF){
    len=0;
    for(int i=0;i<10;i++){
      len+=l[i];
    }
    point=(v1*len)/(v1+v2)+((v1*len)%(v1+v2)>0);
    now=0;
    for(int i=0;i<10;i++){
      now+=l[i];
      if(now>=point){
        printf("%d\n",i+1);
        break;
      }
    }
  }
  return 0;
}

