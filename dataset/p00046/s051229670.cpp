#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){

  double a[11111]={0};
  int i=0;
  while(scanf("%lf",&a[i]) != EOF){
    i++;
  }
  
  sort(a,a+i);

  cout << fabs(a[0]-a[i-1]) << endl;

  return 0;
}