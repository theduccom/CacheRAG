#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

const unsigned int MAX = 50010;
char prime[MAX];

int main(){
    prime[0] = prime[1] = 1;
    for(unsigned int i = 4; i < MAX; i += 2){
        prime[i] = 1;
    }
    unsigned int rt = sqrt(MAX);
    for(unsigned int i = 3; i <= rt; i += 2){
        if(prime[i]) continue;
        for(unsigned int j = i+i; j < MAX; j += i){
            prime[j] = 1;
        }
    }
    unsigned int n;
    while(cin >> n, n){
        unsigned int c = 0;
        if(!prime[n-2]) c++;
        for(unsigned int p = 3; p <= MAX; p += 2){
            if(prime[p]) continue;
            if(n < p+p) break;
            if(!prime[n-p]) c++;
        }
        cout << c << endl;
    }

    return 0;
}