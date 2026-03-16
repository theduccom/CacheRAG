#include <iostream>

using namespace std;

main(){
  int a, b;
  int sum=0, sum2=0;
  double ave;
  int i;
  for(i=0;;i++){
    if(scanf("%d,%d", &a, &b)==EOF) break;
    sum+=a*b;
    sum2+=b;
  }
  ave=(double)sum2/(double)i;
  ave*=10;
  int ans=((int)ave+5)/10;
  printf("%d\n%d\n", sum, ans);
  return 0;
}