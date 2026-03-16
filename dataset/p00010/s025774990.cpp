#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double x1,y1,x2,y2,x3,y3;
    while(n>0)
    {
        cin >> x1 >> y1 >>x2 >> y2 >> x3 >> y3;
        double s,v1x,v1y,v2x,v2y,h1x,h1y,h2x,h2y;
        v1x = y2-y1;
        v1y = x1-x2;
        v2x = y3-y1;
        v2y = x1-x3;
        h1x = (x2+x1)/2;
        h1y = (y2+y1)/2;
        h2x = (x3+x1)/2;
        h2y = (y3+y1)/2;

        double detA = v1x*v2y-v1y*v2x;
        //double hx = (x2+x1)/2;
        //double hy = (y2+y1)/2;
        s = (v2y*(h2x-h1x) -v2x*(h2y-h1y))/detA;
        double ox,oy;
        ox = h1x + s*v1x;
        oy = h1y + s*v1y;
        if(-0.0005<ox&&ox<0)ox = 0;
        if(-0.0005<oy&&oy<0)oy = 0;
        double r = sqrt((x1-ox)*(x1-ox)+(y1-oy)*(y1-oy));
        printf("%.3f %.3f %.3f\n",ox,oy,r);
        --n;
    }
    return 0;
}