#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
 
int main(){
 
    double d,w,h,r,mind,dw,wh,hd;
    int n;
 
    while(true){
        scanf("%lf %lf %lf",&d,&w,&h);
        if(d == 0.0 && w == 0.0 && h == 0.0)break;
 
        scanf("%d",&n);
 
        for(int i=0; i < n; i++){
            scanf("%lf",&r);
            dw = (sqrt(d*d+w*w))/2.0;
            wh = (sqrt(w*w+h*h))/2.0;
            hd = (sqrt(d*d+h*h))/2.0;
            mind = min(dw,min(wh,hd));
            if(r > mind){
                printf("OK\n");
            }else{
                printf("NA\n");
            }
        }
    }
    return 0;
}
