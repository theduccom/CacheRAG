#include <stdio.h>
using namespace std;
int main ()
{
    double v,t,y,n,i;
    while(scanf("%lf",&v)!=EOF){
        y=4.9*(v/9.8)*(v/9.8);
        for(i=1;;i++){
            if(y-5>0) y=y-5;
            else if(y-5<=0)break;
        }
        printf("%d\n",(int)i+1);
    }
    return 0;
}