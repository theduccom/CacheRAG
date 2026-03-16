#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  double a[11];
  while(cin >>a[1]){
    double ans = 0;
    for(int i=2; i<11; i++){
      if(i%2 == 0) a[i] = a[i-1]*2;
      else a[i] = a[i-1]/3;
    }
    for(int i=1; i<11; i++) ans+=a[i];
    printf("%.8lf\n",ans);
  }
  return 0;
}