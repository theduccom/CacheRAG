#include <bits/stdc++.h>
#define MAX_N 10000000
using namespace std;

int prime[MAX_N];
bool is_prime[MAX_N];
/*
int init() {
    int p = 0;
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for(int r = 2; r * r <= MAX_N; r++) {
        if(is_prime[r]) {
            prime[p++] = r;
            for(int c = r*2; c <= MAX_N; c+=r) {
                is_prime[c] = false;
            }
        }
    }
    return(p);
}
*/
bool isPrime(int n) {
    for(int r = 2; r * r <= n; r++) {
        if(n % r == 0) return(false);
    }
    return(true);
}

void init() {
    int p = 0;
    prime[p++] = 2;
    for(int r = 3; p < 10000; r+=2) {
        if(isPrime(r)) prime[p++] = r;
    }
}


int main(void) {
    int num;
    init();
    while(cin >> num, num != 0) {
        int sum = 0;
        for(int r = 0; r < num; r++) {
            sum += prime[r];
        }
        cout << sum << endl;
    }
    return(0);
}