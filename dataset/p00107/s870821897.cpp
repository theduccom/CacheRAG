#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
  while(1){
    int a[3];
    scanf("%d%d%d", a, a+1, a+2);
    if(a[0]==0&a[1]==0&a[2]==0) break;

    sort(a, a+3);

    int t = (a[0]*a[0]+a[1]*a[1]);

    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
      int k;
      scanf("%d", &k);
      printf("%s\n", (4*k*k > t)? "OK":"NA");
    }
  }
}