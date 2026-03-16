#include<bits/stdc++.h>
using namespace std;

int main(){
double a,b;
while(scanf("%lf%lf",&a,&b),a||b){
    printf("%.10lf\n",a*a+sqrt(a*a/4+b*b)*a*2);
}
}