#include <bits/stdc++.h>
 
using namespace std;
 
#define FOR(i, j, k) for(int i = j; i < k; ++i)
#define rep(i, j) FOR(i, 0, j)
#define repr(i, j) for(int i = j; i >= 0; --i)
#define INF (1 << 30)
#define MOD 1e9 + 7
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
 
int main() {
    string s;
    while(getline(cin, s)){
    	rep(i, 26) {
	    	rep(j, s.size()) {
	            if('a' <= s[j] && s[j] < 'z') s[j] = s[j] + 1;
	            else if(s[j] == 'z') s[j] = 'a';
	        }
	        if(s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos){
                cout << s << endl;
            }
	    }
    }
    return 0;
}