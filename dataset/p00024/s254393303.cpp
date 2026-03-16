#include <iostream>
using namespace std;

int main(){
  double v, h;
  int f;

  while(cin>>v){
    h=v*v/19.6;
    f=(int)h/5+2;
    printf("%d\n", f);
  }

  return 0;
}