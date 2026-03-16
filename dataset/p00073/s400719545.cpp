#include<bits/stdc++.h>
using namespace std;

int main(){

  int x,h;
  double sum;

  while(cin >> x >> h , x&&h){
    sum = x*x;
    sum += x* sqrt(h*h+(x/2.0)*(x/2.0)) / 2.0 *4;
    printf("%.6f\n",sum);
  }


  return 0;

}