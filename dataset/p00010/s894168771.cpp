#include<cstdio>
#include<iostream>
#include<cmath>

#define t(a) (a)*(a)

using namespace std;

int main(){
    double x[3],y[3],a1,a2,b1,b2,c1,c2,rx,ry,r;
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        for(int i=0;i<3;i++) cin >> x[i] >> y[i];
        a1 = 2*(x[1]-x[0]);
        b1 = 2*(y[1]-y[0]);
        c1 = t(x[0])-t(x[1])+t(y[0])-t(y[1]);
        a2 = 2*(x[2]-x[0]);
        b2 = 2*(y[2]-y[0]);
        c2 = t(x[0])-t(x[2])+t(y[0])-t(y[2]);
        rx = (b1*c2-b2*c1)/(a1*b2-a2*b1);
        ry = (c1*a2-c2*a1)/(a1*b2-a2*b1);
        r=sqrt(t(x[0]-rx)+t(y[0]-ry));
        printf("%.3f %.3f %.3f\n",rx,ry,r);
    }
    return 0;
}