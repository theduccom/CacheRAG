#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

#define PI 3.141592653

int main(){
    int n;
    double x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4,x_5,y_5,slope_1,slope_2,x,y,r;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf%lf%lf%lf",&x_1,&y_1,&x_2,&y_2,&x_3,&y_3);
        
        if(y_1 - y_2 == 0){
            swap(x_2,x_3);
            swap(y_2,y_3);
        }
        if(y_2 - y_3 == 0){
            swap(x_1,x_2);
            swap(y_1,y_2);
        }
        
        slope_1=-(x_1-x_2)/(y_1-y_2);
        slope_2=-(x_3-x_2)/(y_3-y_2);
        
        x_4 = (x_1+x_2)/2;
        y_4 = (y_1+y_2)/2;
        
        x_5 = (x_3+x_2)/2;
        y_5 = (y_3+y_2)/2;

        x = ((slope_1*x_4-slope_2*x_5)-y_4+y_5)/(slope_1-slope_2);
        
        y = slope_1*x-slope_1*x_4+y_4;
        
        r = (x_1-x)*(x_1-x)+(y_1-y)*(y_1-y);
        
        printf("%.3lf %.3lf %.3lf\n",x,y,sqrt(r));
    }
    
    return 0;
}