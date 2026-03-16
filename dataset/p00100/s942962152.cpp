#include "stdio.h"
#include "string.h"
long long N[4001];
int f[4001];
int main(){
    int x,i,j,c=0;
    long long p,n;
    scanf("%d",&i);
    while(i!=0){
        c=0;
	memset(N,0,sizeof(N));
	memset(f,0,sizeof(f));
        for(j=0;j<i;j++){
            scanf("%d%lld%lld",&x,&n,&p);
            if(N[x]>=0&&(N[x]+=n*p)>=1000000L){
                f[c]=x;
                c++;
                N[x]=-100L;
            }
        }
        if(c<1){
            printf("NA\n");
        }else{
            for(j=0;j<c;j++)printf("%d\n",f[j]);
        }
        scanf("%d",&i);
    }
    return 0;
}