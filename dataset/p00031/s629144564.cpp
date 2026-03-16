#include <iostream>
using namespace std;

int main(){
  int n, i, elm;
  int isFirst;

  while(cin>>n){
    elm=1; isFirst=1;
    for(i=0; i<10; i++){
      if(n%2==1){
        if(!isFirst) printf(" ");
        isFirst=0;
        printf("%d", elm);
      }
      n=n>>1; elm=elm<<1;
    }
    printf("\n");
  }

  return 0;
}