#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <map>
#include <numeric>
#include <sstream>
#include <queue>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()
#define print(s) cout << (s) << endl

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    REP(i,n) {
        getline(cin, s);
        if (s.size() < 6) {
            cout << s << endl;
        }else {
            REP(i,6) {
                cout << s[i];
            }
            for(int i = 6; i < s.size(); i++) {
                if (s[i] != 'o') cout << s[i];
                else {
                    if (s[i-6] == 'H' && s[i-5] == 'o' && s[i-4] == 's' && s[i-3] == 'h' && s[i-2] == 'i' && s[i-1] == 'n') {
                        cout << 'a';
                    }else {
                        cout << s[i];
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}