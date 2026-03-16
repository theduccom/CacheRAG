#include <iostream>
using namespace std;

int main(){
  double max=-1.0, min=10000.0;
  double tmp;

  while(cin>>tmp){
    if(max<tmp) max=tmp;
    if(min>tmp) min=tmp;
  }
  printf("%lf\n", max-min);

  return 0;
}