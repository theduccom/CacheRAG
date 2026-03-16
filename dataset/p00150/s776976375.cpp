#include <stdio.h>

const int MAX_V = 10000;
int prime[MAX_V+1];

void init(){
    int i, k, v;
    for(i=2; i<=MAX_V; i++){
        prime[i] = 1;
    }
    for(i=2; i*i<=MAX_V; i++){
        if(prime[i]){
            for(k=2*i; k<=MAX_V; k+=i){
                prime[k]=0;
            }
        }
    }   
}

int isprime(int n){
    return prime[n];
}

int main(){
    init();
    int num;
    while(1){
        scanf("%d", &num);
        if(num==0)break;
        for(int i=num; i>2; i--){
            if(isprime(i)==1)
                if(isprime(i-2)==1){
                    printf("%d %d\n", i-2, i);
                    break;
                }
        }
    }
    return 0;
}