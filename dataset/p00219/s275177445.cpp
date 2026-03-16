#include <stdio.h>
int main(){
    int n,a[10],temp;
    while(1){
        scanf("%d",&n);
        if(n==0)return 0;
        for(int i=0;i<10;i++)a[i]=0;
        while(n--){
            scanf("%d",&temp);
            a[temp]++;
        }
        for(int i=0;i<10;i++){
            if(a[i]==0)printf("-\n");
            else{
                for(int j=0;j<a[i];j++)printf("*");
                printf("\n");
            }
        }
    }
}