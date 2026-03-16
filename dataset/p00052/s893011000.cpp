#include<cstdio>
using namespace std;
main(){
  int N;
  while(1){
    scanf("%d",&N);
    if(N==0) break;
    int res=0;
    int keta = 5;
    for(int i=0;i<19;i++){
      res += (N/keta);
      keta*=5;
    }
    printf("%d\n",res);
  }
}