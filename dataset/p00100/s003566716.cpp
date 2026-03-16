#include<stdio.h>
#define max 1000000

long long int id[4000],raw[4000];

int main(){
    long long int num,sale,d;
    int n,i,j,count,k,l,m;

    for(;;){
    
        scanf("%lld",&n);

        for (k=0;k<=4000;k++){
        
            id[k] = 0;
        }

        if(n==0)break;

        else{
            count = 0;
            for(i=1;i<=n;i++){
                scanf("%lld %lld %lld",&num,&sale,&d);
                id[num] += (sale * d);
                raw[i] = num;
            }
            for(l=0;l<4000;l++){
                for(m=l+1;m<=4000;m++){
                    if(raw[l]==raw[m])raw[m]=0;
                }
            }
            for(j=1;j < 4000;j++){
                if(id[raw[j]] >=  max){
                    printf("%lld\n",raw[j]);
                    count++;
                }
            }
        if(count==0)printf("NA\n");
        

        }
    }
  return 0;
}