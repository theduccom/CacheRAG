#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main() {
  double a;
  while(cin>>a){
    double ans = a;
    for(int i=2;i<=10;i++) {
      if (i%2==1)
        a/=3;
      else
        a*=2;
      ans += a;
    }
    printf("%.8lf\n",ans);
  }
}
