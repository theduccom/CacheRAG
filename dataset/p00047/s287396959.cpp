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

int cups[3] = {1,0,0};

void swapCup(char c1, char c2) {
    int temp = cups[c1-'A'];
    cups[c1-'A'] = cups[c2-'A'];
    cups[c2-'A'] = temp;
}

int main() {
    char c1, c2, c3;
    while(cin >> c1 >> c2 >> c3) {
        swapCup(c1, c3);
    }
    REP(i,3) {
        if (cups[i]) {
            cout << (char)('A' + i) << endl;
            break;
        }
    }
    return 0;
}