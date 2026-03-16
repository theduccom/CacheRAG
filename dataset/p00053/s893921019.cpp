#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;

int const N = 10010;
int ans[N];

bool isprime(int x){
    for (int i = 2; i*i <= x; i++){
        if (x%i == 0) return false;
    }
    return true;
}

int main(int argc, char ** argv) {
    int k = 0, i = 2;
    ans[0] = 0;
    while (k != N){
        while (!isprime(i)) i++;
        ans[k + 1] = ans[k] + i;
        i++;
        k++;
    }
    int n;
    while (scanf("%d",&n), n != 0){
        printf("%d\n", ans[n]);
    }
}