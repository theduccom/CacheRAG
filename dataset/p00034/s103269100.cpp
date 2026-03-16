#include<cstdio>
int main(){
    double l[10],v1,v2;
    while(~scanf("%lf,",&l[0])){
        for(int i=1;i<10;i++){
            scanf("%lf,",&l[i]);
        }
        scanf("%lf,%lf",&v1,&v2);
        double cs;
        for(int i=1;i<10;i++){
            l[i]+=l[i-1];
        }
        cs=(l[9]/(v1+v2))*v1;
        for(int i=0;i<10;i++){
            if(cs<=l[i]){
                printf("%d\n",i+1);
                break;
            }
        }
    }
}