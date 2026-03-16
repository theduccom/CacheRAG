#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    double x1, y1, x2, y2, x3, y3, xm1, ym1, xm2, ym2, xc, yc;
    cin >> n;
    while(n--){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        xm1=(x1+x2)/2.0;
        ym1=(y1+y2)/2.0;
        xm2=(x1+x3)/2.0;
        ym2=(y1+y3)/2.0;
        //cout << xm1 << " "<< ym1 << " " << xm2 << " " << ym2 <<"\n";
        if(y2==y1 && y3!=y1){
            double a2=-(x3-x1)/(y3-y1);
            xc=xm1;
            yc=a2*(xc-xm2)+ym2;
            double r=sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc));
            printf("%.3f %.3f %.3f\n", xc, yc, r);
        }
        else if(y2!=y1 && y3==y1){
            double a1=-(x2-x1)/(y2-y1);
            xc=xm2;
            yc=a1*(xc-xm1)+ym1;
            double r=sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc));
            printf("%.3f %.3f %.3f\n", xc, yc, r);
        }
        else{
            double a1=-(x2-x1)/(y2-y1);
            double a2=-(x3-x1)/(y3-y1);
            xc=(a1*xm1-a2*xm2-ym1+ym2)/(a1-a2);
            yc=a1*(xc-xm1)+ym1;
            double r=sqrt((x1-xc)*(x1-xc)+(y1-yc)*(y1-yc));
            printf("%.3f %.3f %.3f\n", xc, yc, r);
        }
    }
    
}

