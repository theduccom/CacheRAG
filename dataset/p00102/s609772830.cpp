#include <iostream>
using namespace std;

int main(){
  int n;
  int a[10][10];
  int sum, amount;
  int i, j;

  while(cin>>n){
    if(n==0) break;
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
        cin>>a[i][j];
      }
    }

    for(i=0; i<n; i++){
      sum=0;
      for(j=0; j<n; j++){
        printf("%5d", a[i][j]);
        sum+=a[i][j];
      }
      printf("%5d\n", sum);
    }
    amount=0;
    for(j=0; j<n; j++){
      sum=0;
      for(i=0; i<n; i++){
        sum+=a[i][j];
      }
      printf("%5d", sum);
      amount+=sum;
    }
    printf("%5d\n", amount);
  }

  return 0;
}