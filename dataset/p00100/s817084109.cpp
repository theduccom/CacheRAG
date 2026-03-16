#include <iostream>
#include <cstdio>
using namespace std;
#define MAX 4000
int main(){
    int i,dataset,snum[MAX],flag;
    long long total[MAX],unitcost,amount;
    while( 1 ){
 
        for(i=0;i<MAX;i++){
            total[i]=0;
            snum[i]=0;
        }
 
        scanf("%d",&dataset);
        if( dataset == 0 ){break;}
 
        else for(i=0;i<dataset;i++){
            scanf("%d %lld %lld",&snum[i],&unitcost,&amount);
            total[snum[i]]+=unitcost*amount;
        }
         
 
        flag=0;
        for(i=0;i<MAX;i++){
                        if( total[snum[i]] >= 1000000 ){
                flag=1;
                printf("%d\n",snum[i]);
                total[snum[i]]=0;
            }
        }
        if( dataset!=0 && flag==0 ){
            printf("NA\n");
        }
    }
}