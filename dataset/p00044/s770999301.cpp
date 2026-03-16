#include <iostream>
#include <cstdio>
#include <cstring>
#define MAX_N 50100
using namespace std;

bool prime[MAX_N + 1];

bool isPrime(int n) {
    //今回、０、１をこの関数の引数に取らない
    for(int r = 2; r * r <= n; r++) {
        if(n % r == 0) return(false);
    }
    return(true);
}

void initialize() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false; //0,1は素数ではない。
    for(int r = 2; r * r <= MAX_N; r++) {
        if(isPrime(r)) {
            for(int c = r * 2; c <= MAX_N; c += r) prime[c] = false; //倍数は素数で無い事が分かっている
        }
    }
}

int searchSmall(int num) {
    for(int r = num - 1; r >= 0; r--)
        if(prime[r]) return(r);
    return(-1);
}

int searchLarge(int num) {
    for(int r = num + 1; r <= MAX_N; r++)
        if(prime[r]) return(r);
    return(-1);
}

int main(void) {
    initialize();
    
    int input;
    while(cin >> input) {
        int max = searchSmall(input), min = searchLarge(input);
        cout << max << " " << min << endl;
    }
    return(0);
}