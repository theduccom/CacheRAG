#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int x,h;
    while(cin >> x >>h)
    {
        if(x==0&&h==0)break;
        double dx = (double)x,dh = (double)h;
        printf("%.6f\n",dx*dx + (sqrt(dx*dx/4+dh*dh)*dx)*2);

    }

    return 0;

}