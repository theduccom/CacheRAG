#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;
typedef long long ll;

int main(){
    int n;
    string S;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        
        double xa,ya,ra,xb,yb,rb;
        
        scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
        
        double dis = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
        
        if(ra > rb){
            if(dis+rb < ra)
                puts("2");
            else if(dis-rb > ra)
                puts("0");
            else
                puts("1");
        }else{
            if(dis+ra < rb)
                puts("-2");
            else if(dis-ra > rb)
                puts("0");
            else
                puts("1");
        }
    }
    
    return 0;
}