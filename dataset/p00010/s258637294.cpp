#include <iostream>
#include<math.h>
#include<cstdio>
using namespace std;
  
int main(){
    double x1,x2,x3,y1,y2,y3,trgr,trgx,trgy,A1,B1,C1,A2,B2,C2;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    A1=2*(x2-x1);
    B1=2*(y2-y1);
    C1=x1*x1-x2*x2+y1*y1-y2*y2;
    A2=2*(x3-x1);
    B2=2*(y3-y1);
    C2=x1*x1-x3*x3+y1*y1-y3*y3;
     
    trgx=(B1*C2-B2*C1)/(A1*B2-A2*B1);
    trgy=(C1*A2-C2*A1)/(A1*B2-A2*B1);
    trgr=sqrt((trgx-x1)*(trgx-x1)+(trgy-y1)*(trgy-y1));
        printf("%.3lf %.3lf %.3lf\n",trgx,trgy,trgr);
    }
    return 0;
}
 