#include <stdio.h>
int main(){
    int n,a[5000],m,p,q;
    bool b[5000],f;
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        for(int i=0;i<5000;i++)a[i]=b[i]=0;
        f=false;
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&m,&p,&q);
        if(!b[m]){
            a[m]+=p*q;
            if(a[m]>=1000000){
                b[m]=true;
                f=true;
                printf("%d\n",m);
            }
        }
    }
        if(!f)printf("NA\n");
    }
}