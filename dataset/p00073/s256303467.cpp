#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
  int x,h;
  cin>>x>>h;
  if(!x&&!h)break;
  double H=sqrt(h*h+(x/2.0)*(x/2.0));
  double ans=x*x+2*(x*H);
  printf("%.10f\n",ans);
  }
  return 0;
}