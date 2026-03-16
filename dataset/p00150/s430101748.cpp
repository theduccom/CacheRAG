#include <stdio.h>

const int MAX_V = 1000000; // 100万まて?の素数表を作る
int prime[MAX_V+1]; // 1か?素数,0か?素数て?ない

int main() {
    int i, k, n;
    int ans[2] ={};
    for(i = 2; i <= MAX_V; i++) {
        prime[i] = 1; // 素数と仮定
    }
    for(i = 2; i*i <= MAX_V; i++) {
        if(prime[i]) {
            for(k = 2 * i; k <= MAX_V; k += i) {
                prime[k] = 0; // 素数の2倍以上の倍数は素数ではない
            }
        }
    }
    
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = n; i >= 5; i--) {
            if(prime[i] == 1) {
                ans[1] = i;
                if(prime[i - 2] == 1) {
                    ans[0] = i - 2;
                    break;
                }
            }
        }
        printf("%d %d\n", ans[0], ans[1]);
    }
    
    return 0;
}