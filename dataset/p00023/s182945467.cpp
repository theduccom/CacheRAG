#include<cstdio>
#include<cmath>
double xa,ya,ra,xb,yb,rb;
double dist(){
    return sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&ra,&xb,&yb,&rb);
        if(dist()+rb<ra) printf("2\n");
        else if(dist()+ra<rb) printf("-2\n");
        else if(dist()>ra+rb) printf("0\n");
        else printf("1\n");
    }
}