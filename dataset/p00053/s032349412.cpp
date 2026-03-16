#include <cstdio>
#include <cstring>

#define N 110000

using namespace std;

int main(void){
  int p[N] = {0};
  int sum[10001]={0}, cnt=0;
  
  for (int i=2; i<N; i++){
    if (p[i]==-1) continue;
    p[i]=0;
    cnt++;
    sum[cnt] = sum[cnt-1]+i;
    for (int j=i; j<N; j+=i){
      p[j]=-1;
    }
  }
  while (scanf("%d",&cnt), cnt){
    printf("%d\n",sum[cnt]);
  }
  return 0;
}
