#include <stdio.h>

const int MAX_V = 1000000;
int prime[MAX_V+1];
int main() {
    int i, k, v;
    for(i = 2; i <= MAX_V; i++) {
        prime[i] = 1;
    }
        for(i = 2; i*i <= MAX_V; i++) {
            if(prime[i]){
             for(k = 2 * i; k <= MAX_V; k += i) {
        prime[k] = 0;
             }
            }
        }
    int max=0;
    while(scanf("%d", &v) != EOF) {
        for(i=2; i<=v; i++){
            if(prime[i]==1){
                if(prime[i-2]==1){
                    max=i;
                }
            }
        }
        if(v==0)break;
        printf("%d %d\n",max-2,max);
    }
    return 0;
}