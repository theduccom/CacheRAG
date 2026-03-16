#include <cstdio>
int a,b,c,n,r;
int main()
{
    while(scanf("%d%d%d",&a,&b,&c),(a|b|c)) {
        a*=a;b*=b;c*=c;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&r);
            r*=4*r;
            puts((a+b<r||b+c<r||c+a<r)?"OK":"NA");
        }
    }
    return 0;
}