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

const int pm = 100000;
bool prime[pm];

int main() {
	fill(prime, prime + pm, true);
	prime[0] = prime[1] = false;
	for(int i = 2; i * i <= pm; i++)
		if(prime[i])
			for(int j = 2 * i; j <= pm; j += i)
				prime[j] = false;
	for(int n; cin >> n;) {
		int more, less;
		for(int i = n - 1; i >= 0; i--) {
			if(prime[i]) {
				less = i;
				break;
			}
		}
		for(int i = n + 1; i <= pm; i++) {
			if(prime[i]) {
				more = i;
				break;
			}
		}
		cout << less << " " << more << endl;
	}
	return 0;
}