#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

map<char, int> mp;

int getArab(string rm) {
    int total = 0;
    int prev = 0;
    REP(i,rm.size()) {
        int crt = mp[rm[i]];
        if (crt <= prev) {
            total += crt;
        }else {
            total += -2 * prev + crt;        }
        prev = crt;
    }
    return total;
}

int main() {
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    string s;
    while(cin >> s) {
        cout << getArab(s) << endl;
    }
    return 0;
}