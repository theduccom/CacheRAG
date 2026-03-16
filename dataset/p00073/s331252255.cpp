#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    double x , h;

    while(scanf("%lf%lf",&x,&h),x,h){
        double ans = 0;
        ans += x*x;

        double y;
        y = x/2;

        double a;
        a = hypot(y,h);

        ans += x*a*2;
        printf("%lf\n",ans);
    }

    return 0;
}