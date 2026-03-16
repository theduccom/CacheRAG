#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double ax,ay,bx,by,cx,cy,x,y,r;
    double A1,B1,C1,A2,B2,C2;
    cin>>n;
    while(n--){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        A1=2*(bx-ax);
        B1=2*(by-ay);
        C1=ax*ax-bx*bx+ay*ay-by*by;
        A2=2*(cx-ax);
        B2=2*(cy-ay);
        C2=ax*ax-cx*cx+ay*ay-cy*cy;
        x=(B1*C2-B2*C1)/(A1*B2-A2*B1);
        y=(C1*A2-C2*A1)/(A1*B2-A2*B1);
        r=sqrt((ax-x)*(ax-x)+(ay-y)*(ay-y));
        printf("%.3f %.3f %.3f\n",x,y,r);
    }
    return 0;
}