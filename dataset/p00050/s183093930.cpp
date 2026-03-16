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

void appletopeach(string &s) {
    auto pos = s.find("apple");
    s.replace(pos, 5, "peach");
}

void peachtoapple(string &s) {
    auto pos = s.find("peach");
    s.replace(pos, 5, "apple");
}

int main() {
    string s;
    vector<string> v;
    while(cin >> s) {
        if (s.find("apple") != string::npos) {
            appletopeach(s);
            v.push_back(s);
        }else if (s.find("peach") != string::npos) {
            peachtoapple(s);
            v.push_back(s);
        }else {
            v.push_back(s);
        }
    }
    REP(i,v.size()-1) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
    return 0;
}