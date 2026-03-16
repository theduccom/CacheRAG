#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int a,b,theta=90;
    double x=0,y=0,pi=3.141592653589;
    char k;
    for(;;){
        scanf("%d,%d",&a,&b);
        if(a==0 && b==0){
            break;
        }
        y+=a*sin(theta/180.0*pi);
        x+=a*cos(theta/180.0*pi);
        theta+=b;
    }
    printf("%d\n%d\n",(int)-x,(int)y);
    return 0;
}