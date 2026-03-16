#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

#define MA 114514810

using namespace std;
int prime[MA];

bool is_prime(int n) {
    for(int i=2; i*i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

void init() {
    int cnt=0;
    prime[cnt++] = 2;
    for(int i=3; cnt<10000; i++) {
        if(is_prime(i))
            prime[cnt++] = i;
    }
}

int main(void)
{
    int n;
    init();

    while(1) {
        scanf("%d", &n);
        if(n==0) break;

        int sum = 0;
        for(int i=0; i<n; i++)
            sum += prime[i];
        printf("%d\n", sum);
    }

    return 0;
}