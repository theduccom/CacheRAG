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

bool cross(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4){
    double a,b,c,d;
    
    a=(x3-x4)*(y1-y3)+(y3-y4)*(x3-x1);
    b=(x3-x4)*(y2-y3)+(y3-y4)*(x3-x2);
    c=(x1-x2)*(y3-y1)+(y1-y2)*(x1-x3);
    d=(x1-x2)*(y4-y1)+(y1-y2)*(x1-x4);
    
    if((c<0)^(d<0))
        return true;
    else
        return false;
}

int main(){
    int w;
    
    while(EOF!=scanf("%d",&w)){
        
        bool f = true;
        
        for(int i=0;i<=9;i++){
    
            if(w & (1 << i)){
                printf(f ? "%d" : " %d",(int)pow(2,i));
                f=false;
            }
        }
        
        printf("\n");
    }
    
    return 0;
}