#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
int x,h;
double ans,height;

while(cin>>x>>h){
    if(x==0&&h==0){
        break;
    }
    height=sqrt(x*x*0.5*0.5+h*h);
    ans=(double)(x*x+4*(x*height*0.5));

    printf("%.6f\n",ans);
}
    return 0;
}
