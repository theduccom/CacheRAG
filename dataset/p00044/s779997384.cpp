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

bool prime(int n) {
    if (n == 2) return true;
    else if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> primeList;

void findPrimes(int k) {
    int smallestIndex = 0;
    REP(i,primeList.size()) {
        if (k <= primeList[i]) {
            smallestIndex = i - 1;
            break;
        }
    }
    cout <<primeList[smallestIndex] << " ";
    if (primeList[smallestIndex + 1] == k) {
        cout << primeList[smallestIndex + 2] << endl;
    }else {
        cout << primeList[smallestIndex + 1] << endl;
    }
}

int main() {
    FOR(i,2,51000) {
        if (prime(i)) primeList.push_back(i);
    }
    int k;
    while(cin >> k) {
        findPrimes(k);
    }
    return 0;
}