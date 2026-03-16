#include <iostream>

using namespace std;

main(){
  double in;
  long long min=999999999;
  long long max=-999999999;
  while(cin >> in){
    long long tmp=(long long)(in*100.0);
    if(min>tmp) min=tmp;
    if(max<tmp) max=tmp;
  }

  double ans=(double)(max-min)/100.0;
  printf("%.1f\n", ans);
  return 0;
}