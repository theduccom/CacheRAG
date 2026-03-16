#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>
using namespace std;

typedef long long ll;
typedef pair<int, int> P;

#define all(c) (c).begin(), (c).end()
#define pb push_back
#define mp make_pair
#define EXIST(v,i) (find(all(v), i) != (v).end())
#define ERASE(v,i) (v).erase(remove(all(v), i), (v).end())
#define INDEX(v,i) (find(all(v), i) - (v).begin())
#define rep(i,n) for(int i = 0; i < (int)n; ++i)
#define debug(x) cerr << #x << " = " << (x) << endl;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

const int INF = 100000000;
const double PI = 3.14159265358979323846;
const double EPS = 1e-10;

int main() {
	for(string line; getline(cin, line);) {
		string change(line);
		for(int i = 0, n = line.length(); i < n; i++) {
			if(line[i] != ' ' && line[i] != '.') {
				change[i] -= 'a';
			}
		}
		for(int p = -26; p <= 26; p++) {
			string s(change);
			for(int i = 0, n = s.length(); i < n; i++) {
				if(line[i] != ' ' && line[i] != '.') {
					s[i] = (s[i] + p) % 26;
				}
			}
			for(int i = 0, n = s.length(); i < n; i++) {
				if(line[i] != ' ' && line[i] != '.') {
					s[i] += 'a';
				}
			}
			if(s.find("the") != -1 || s.find("this") != -1 || s.find("that") != -1) {
				cout << s << endl;
				break;
			}
		}
	}
	return 0;
}