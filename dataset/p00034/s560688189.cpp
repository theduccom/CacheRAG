#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
//djzofhf;eo //DJ ???????????§???
using namespace std;
int main(){
    double a[11]={0};
    double v[2];
    while(scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10],&v[0],&v[1])!=EOF){
        double rui[11]={0};
        for(int i=1;i<=10;i++)rui[i]=rui[i-1]+a[i];
        double suredis=rui[10]*(v[0]/(v[0]+v[1]));
        for(int i=1;;i++){
            if(suredis-0.000001<rui[i]){
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}