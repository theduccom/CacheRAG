#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

void rot1(string &s) {
    string t = "";
    REP(i,s.size()) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] == 'a') t += "z";
            else t += s[i] - 1;
        }else {
            t += s[i];
        }
    }
    s = t;
}

int main() {
    string s;
    while(getline(cin, s)) {
        while(s.find("the") == string::npos && s.find("this") == string::npos && s.find("that") == string::npos) {
            rot1(s);
        }
        cout << s << endl;
    }
    return 0;
}