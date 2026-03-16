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
	vector<int> line(10);
	int va, vb;
	while(~scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &line[0], &line[1], &line[2], &line[3], &line[4], &line[5], &line[6], &line[7], &line[8], &line[9], &va, &vb)) {
		int linesum = accumulate(all(line), 0);
		double dist = linesum * ((double)va / (va + vb));
		vector<int> ls(10);
		ls[0] = line[0];
		for(int i = 1; i < 10; i++) ls[i] = ls[i - 1] + line[i];
#if 0
		cerr << dist << endl;
		cerr << "begin" << endl;
		for(int i=0,n=ls.size(); i<n;i++) cerr << ls[i] << endl;
		cerr << "end" << endl;
#endif
		cout << (lower_bound(all(ls), dist) - ls.begin()) + 1 << endl;
	}
	return 0;
}