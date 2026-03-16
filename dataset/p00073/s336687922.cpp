#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){
    double x,h,high,ans;
    while(cin>>x>>h){
        if(x==0)break;
        ans=(x/2)*(x/2)+h*h;
        high=sqrt(ans);
        ans=(x*x)+(4*(x*high/2));
        printf("%lf\n",ans);
    }
    return 0;
}