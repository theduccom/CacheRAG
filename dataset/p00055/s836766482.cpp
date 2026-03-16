#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){

  double a[100] = {0};

  while(cin >> a[0]){
    
    for(int i=1;i<10;i++){
      if(i%2 == 1) a[i] = a[i - 1] * 2;
      else a[i] = a[i - 1] / 3;
    }

    for(int i=1;i<10;i++) a[0] += a[i];

    printf("%.8f\n",a[0]);
  }
}