#include <stdio.h>
struct circle{
    long double x;
    long double y;
    long double r;
};
long double abs(long double a){
    if(a<0)return -a;
    return a;
}
long double range(circle a,circle b){
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
int main(){
    int n;
    circle a[2];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++)scanf("%Lf%Lf%Lf",&a[j].x,&a[j].y,&a[j].r);
        if((a[0].r+a[1].r)*(a[0].r+a[1].r)<range(a[0],a[1])){
            printf("0\n");
        }
        else if(range(a[0],a[1])>=abs(a[0].r-a[1].r)*abs(a[0].r-a[1].r)&&range(a[0],a[1])<=(a[0].r+a[1].r)*(a[0].r+a[1].r)){
            printf("1\n");
        }
        else{
            if(a[0].r>a[1].r)printf("2\n");
            else printf("-2\n");
        }
    }
}