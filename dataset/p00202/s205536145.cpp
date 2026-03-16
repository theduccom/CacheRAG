#include <stdio.h>
#include <string.h>

#define MAX_P 1000001

char isprime[MAX_P];

int n, e, m[30];
char dp[2000002];

int max(int a, int b){
    return a > b ? a : b;
}

void sieve(void){
    int x, y;
    memset(isprime, 1, sizeof(isprime));
    isprime[0] = isprime[1] = 0;
    for(x = 2; x * x <= MAX_P; x++){
        if(isprime[x]){
           for(y = x * x; y < MAX_P; y += x){
               isprime[y] = 0;
           }
        }
    }
}

int main(void){
    int x, y;
    sieve();
    while(1){
        scanf("%d%d", &n, &e);
        if(n+e == 0) break;
        for(x = 0; x < n; x++){
            scanf("%d", m+x);
        }
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(x = 0; x < e; x++){
            if(!dp[x]) continue;
            for(y = 0; y < n; y++){
                dp[x + m[y]] = 1;
            }
        }
        for(x = e; x >= 2; x--){
            if(dp[x] && isprime[x]){
                printf("%d\n", x);
                break;
            }
        }
        if(x < 2){
            printf("NA\n");
        }
    }
    return 0;
}