#include<stdio.h>
 
int main(void){
    int i,n,t1,t2,j,m,e;
    while(0==0)
    {
        scanf("%d",&n);
        if(n==0)break;
 
        for(i=0;i<n;i++){
            scanf("%d %d %d",&m,&e,&j);
            t1=m+e;  t2=m+e+j;
            if((m==100 || e==100 || j==100) || (t1>=180) || (t2>=240))
                printf("A\n");
            else if((t2>=210) || (t2>=150 && ( m>=80 || e>=80)))
                printf("B\n");
            else printf("C\n");
        }
    }
    return 0;
}