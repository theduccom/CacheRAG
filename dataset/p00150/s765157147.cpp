#include<cstdio>
int sosu[10001];
int main(){
  int N;
  sosu[0]=1;
  sosu[1]=1;
  for(int i=2;i<=10000;i++){
    if(sosu[i]) continue;
    for(int j=i+i;j<=10000;j+=i){
      sosu[j]=1;
    }
  }
  while(scanf("%d",&N),N){
    for(int i=N;i>1;i--){
      //      printf("%d %d\n",sosu[i],sosu[i-2]);
      if(!sosu[i] && !sosu[i-2]){
	printf("%d %d\n",i-2,i);
	break;
      }
    }
  }
}