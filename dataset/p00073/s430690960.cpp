#include <bits/stdc++.h>
using namespace std;
int main(){
  while(true){
    int x,h;
    scanf("%d%d",&x,&h);
    if(x+h==0)return 0;
    // x/2, h, ?
    double sha = sqrt(x*x/4.0 + 1.0*h*h);
    double ans = x*x*1.0 + 4.0*x*sha/2.0;
    printf("%.9f\n",ans);
  }
}
