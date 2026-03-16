#include <cstdio>
using namespace std;

int main(void){
  double a;
  while(1){
  if(scanf("%lf", &a) == EOF) break;
  double ans = a;
  for(int i=2; i <= 10; i++){
    if(i%2 == 0){
      a = a * 2;
      ans += a;
    }else{
      a = a / 3;
      ans += a;
    }
  }
  printf("%.9lf\n", ans);
  }
  return 0;
}