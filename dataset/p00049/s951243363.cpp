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

int AA;
int BB;
int AB;
int OO;

int main() {
    int n;
    char c;
    string s;
    while(cin >> n >> c >> s) {
        if (s == "A") {
            AA++;
        }else if (s == "B") {
            BB++;
        }else if (s == "O") {
            OO++;
        }else {
            AB++;
        }
    }
    print(AA);
    print(BB);
    print(AB);
    print(OO);
    return 0;
}