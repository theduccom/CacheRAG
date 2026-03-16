#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;

int const N = 1000010;
int ans[N];

bool isprime(int x){
    for (int i = 2; i*i <= x; i++){
        if (x%i == 0) return false;
    }
    return true;
}

int main(int argc, char ** argv) {
    int n;
    while (~scanf("%d", &n)){
        int lo = n - 1, hi = n + 1;
        while (!isprime(lo)) lo--;
        while (!isprime(hi)) hi++;
        printf("%d %d\n", lo, hi);
    }
}