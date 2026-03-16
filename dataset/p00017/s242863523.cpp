#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <functional>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <fstream>
using namespace std;
inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v;}
template<class T> inline string toStr(T x) { ostringstream sout; sout << x; return sout.str();}
typedef vector<int> vi;
typedef vector<vi>  vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n) FOR(i,0,(n)-1)
const double EPS = 1e-12;
const double PI = acos(-1.0);
const int INF = INT_MAX/10;
 
int main() {
    string s;
    while(getline(cin, s)) {
        REP(i, 26) {
            REP(j, s.length()) {
                if('a' <= s[j] && s[j] <= 'z') {
                    s[j]++;
                    if('z' < s[j]) {
                        s[j] -= 26;
                    }
                }
            }
 
            if(s.find("the") != string::npos) {
                cout << s << endl;
                goto next;
            } else if(s.find("this") != string::npos) {
                cout << s << endl;
                goto next;
            } else if(s.find("that") != string::npos) {
                cout << s << endl;
                goto next;
            }
        }
 
        next:;
    }
 
    return 0;
}