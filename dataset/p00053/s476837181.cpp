#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

bool isPrime(int n) {
    if (n == 2) return true;
    else if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    vector<long> v;
    v.push_back(2);
    int i = 3;
    while(v.size() < 10000) {
        if (isPrime(i)) {
            v.push_back(v.back() + i);
        }
        i+=2;
    }
    int n;
    while(cin >> n, n) {
        cout << v[n-1] << endl;
    }
    return 0;
}