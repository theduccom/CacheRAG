#include<stdio.h>
int table[55000];
 
int main(){
    for(int i=2;i<1000;i++){
        if(table[i]==0){
            for(int j=i*2;j<=55000;j+=i){
                table[j]=1;
            }
        }
    }
    int a;
    while(~scanf("%d",&a)){
        int i;
        for(i=a-1;table[i]==1;i--);
        printf("%d ",i);
        for(i=a+1;table[i]==1;i++);
        printf("%d\n",i);
    }
}

