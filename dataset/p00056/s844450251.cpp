#include <cstdio>
#include <cstring>

#define N 50000

using namespace std;

int main(void){
  int p[N+1] = {0};
  int n, ans;
  
  for (int i=2; i<N; i++){
    if (p[i]==-1) continue;
    p[i]=1;
    for (int j=i*2; j<N; j+=i){
      p[j]=-1;
    }
  }
  while (scanf("%d",&n), n){
    ans = 0;
    for (int i=2; i<=n/2; i++){
      if (p[i]==1 && p[n-i]==1){
        ans++;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}
