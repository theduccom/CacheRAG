#include <cstdio>

using namespace std;

bool is_prime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) return false;
    }
    return n != 1;
}

int main(void)
{
    int n;
    while(~scanf("%d", &n)) {
        for(int i=n-1; i>=0; i--) {
            if(is_prime(i)) {
                printf("%d ", i);
                break;
            }
        }
        for(int i=n+1; ; i++) {
            if(is_prime(i)) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}