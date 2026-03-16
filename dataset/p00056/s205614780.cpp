#include<cstdio>
using namespace std;
int sosu[55555];
main(){
  int N;

  sosu[0]=1;
  sosu[1]=1;
  for(int j=2;j<224;j++){
    if(sosu[j]==1) continue;
    for(int i=j+j;i<50001;i+=j){
      sosu[i]=1;
    }
  }
  
  while(1){
    scanf("%d",&N);
    if(N==0) break;
    int res=0;
    for(int i=2;i<=N/2;i++){
      int a = N-i;
      if(sosu[a]==0 && sosu[i]==0){
	res++;
      }
    }
    printf("%d\n",res);
  }
}