#include <stdio.h>
struct emp{
    int num;
    long long sale;
};
int main(){
    while(1){
        int n,num,count=0,c,flag1=0,flag2=0;
        long long p,q;
        struct emp e[4000];
        scanf("%d",&n);
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            scanf("%d %lld %lld",&num,&p,&q);
            c=count;
            flag1=0;
            for(int j=0;j<count;j++){
                if(e[j].num==num) {
                    e[j].sale+=p*q;
                    flag1=1;
                    break;
                }
            }
            if(!flag1){
                e[count].num=num;
                e[count].sale=p*q;
                count++;
            }
        }
        for (int i=0; i<count; i++){
            if (e[i].sale>=1000000) {
                printf("%d\n",e[i].num);
                flag2=1;
            }
        }
        if(!flag2) printf("NA\n");
    }
}