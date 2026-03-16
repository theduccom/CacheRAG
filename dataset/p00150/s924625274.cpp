#include <stdio.h>

int isprime(int n){
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;  //素数でない
    }
    return 1; //素数である
}

int main() {
    int n;
    int ans[2] = {};
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        for(int i = n; i >= 5; i--) {
            if(isprime(i) == 1) {
                ans[1] = i;
                if(isprime(i - 2) == 1) {
                    ans[0] = i - 2;
                    break;
                }
            }
        }
        printf("%d %d\n", ans[0], ans[1]);
    }
}