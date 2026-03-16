#include <iostream>
using namespace std;

int main(){
  int x, y, z;
  char komma;
  int hishi, choho;

  hishi=0; choho=0;
  while(cin>>x>>komma>>y>>komma>>z){
    if(x==y && x+y>z) hishi++;
    else if(x*x+y*y==z*z) choho++;
  }
  printf("%d\n%d\n", choho, hishi);

  return 0;
}