#include<cstdio>
int main(){
    double s;
    while(~scanf("%lf",&s)){
        double y=(4.9*(s/9.8)*(s/9.8))+5;
        if(y==(int)(y/5)*5) printf("%d\n",(int)y/5);
        else printf("%d\n",(int)y/5+1);
    }
}