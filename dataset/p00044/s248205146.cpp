#include <stdio.h>

int isPrime(int x);

int main(void){
    int n,max,min;
    
    while (scanf("%d",&n)!=EOF){
        for (max=n-1; !isPrime(max); max--);
        for (min=n+1; !isPrime(min); min++);
        printf("%d %d\n", max, min);
    }
    return 0;
}

int isPrime(int x){    
    for (int p=2;p*p<=x; p++){
        if (x%p==0) return 0;
    }
    return 1;
}