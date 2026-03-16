#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
double x[32],y[32];
double heron(int cn);
int main(){
    int cnt = 0;
    while(~scanf("%lf,%lf",&x[cnt],&y[cnt])){
        cnt++;
    }
    double ans = 0.0;
    for(int q = 0;q < cnt-2; q++){
        ans += heron(q+1);
    }
    printf("%.6lf\n",ans);
    return 0;
}
double heron(int cn){
    double ab,ac,bc;
    ab = sqrt((x[0]-x[cn])*(x[0]-x[cn]) + (y[0]-y[cn])*(y[0]-y[cn]));
    ac = sqrt((x[0]-x[cn+1])*(x[0]-x[cn+1]) + (y[0]-y[cn+1])*(y[0]-y[cn+1]));
    bc = sqrt((x[cn]-x[cn+1])*(x[cn]-x[cn+1]) + (y[cn]-y[cn+1])*(y[cn]-y[cn+1]));

    double s=0,S=0;
    s = (ab+ac+bc)/2.0;
    S = sqrt(s*(s-ab)*(s-ac)*(s-bc));
    return S;
}