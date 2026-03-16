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
    double x=0,y=0;
    int now_t=0,p,t;
    
    while(1){
        scanf(" %d,%d",&p,&t);
        
        if(p==0 && t==0) break;
        
        y+=cos(now_t/180.0*PI)*p;
        x+=sin(now_t/180.0*PI)*p;
        
        now_t+=t;
    }
    
    printf("%d\n%d\n",(int)x,(int)y);
    
    return 0;
}