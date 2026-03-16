#include <stdio.h>

int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
        }
    return 1;
}

int main(){
    int num;
    while(1){
        scanf("%d",&num);
        if(num==0)break;
        for(int i=num;i>3;i--){
            if(isprime(i)==1&&isprime(i-2)==1){
                printf("%d %d\n",i-2,i);
                break;
            }
        }
    }
    return 0;
}
    