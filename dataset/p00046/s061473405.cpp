#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    double h,high=0,low=0;
    while(scanf("%lf",&h)!=EOF){
        if(low==0) low=h;
        if(high<h) high=h;
        if(low>h) low=h;
    }
    printf("%lf\n",high-low);
    return 0;
}