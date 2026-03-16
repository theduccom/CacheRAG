#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <vector>
#include <ctype.h>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

vector<int> prime(60000);
int k;

void primesearch(int x) {
    for(int i = 0;i < x;i++) prime[i] = i;
    prime[1]=0;
    for(int j = 2;j < x;j++) {
        for(int n = 2;j*n < x;n++) {
            k = j*n;
            prime[k] = 0;
        }
    }
}

int main() {
    int n,ans;
    primesearch(50001);
    while(1) {
        cin >> n;
        if(n==0) break;
        ans = 0;
        for(int p = 2;p < n;p++) {
            if(prime[p] != 0) {
                if(p > n-p) break; 
                if(prime[n-p] != 0) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
