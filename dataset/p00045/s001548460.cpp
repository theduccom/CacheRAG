#include<cstdio>
int main(){
    int a,b,vs=0;
    double ns=0,is=0;
    while(scanf("%d, %d\n",&a,&b)!=-1){
        is++;
        vs+=a*b;
        ns+=b;
    }
    printf("%d\n%d\n",vs,(int)((ns/is)+0.5));
}