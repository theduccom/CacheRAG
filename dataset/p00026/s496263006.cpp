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
	vector<P> small;
	vector<P> midium;
	vector<P> big;
	{
		small.pb(mp(0, -1));
		small.pb(mp(0, 1));
		small.pb(mp(0, 0));
		small.pb(mp(1, 0));
		small.pb(mp(-1, 0));
	}
	{
		midium.pb(mp(-1, -1));
		midium.pb(mp(0, -1));
		midium.pb(mp(1, -1));
		midium.pb(mp(-1, 0));
		midium.pb(mp(0, 0));
		midium.pb(mp(1, 0));
		midium.pb(mp(-1, 1));
		midium.pb(mp(0, 1));
		midium.pb(mp(1, 1));
	}
	{
		big.pb(mp(-2, 0));
		big.pb(mp(-1, -1));
		big.pb(mp(-1, 0));
		big.pb(mp(-1, 1));
		big.pb(mp(0, -2));
		big.pb(mp(0, -1));
		big.pb(mp(0, 0));
		big.pb(mp(0, 1));
		big.pb(mp(0, 2));
		big.pb(mp(1, -1));
		big.pb(mp(1, 0));
		big.pb(mp(1, 1));
		big.pb(mp(2, 0));
	}
	int field[10][10];
	memset(field, 0, sizeof field);
	for(int x, y, size; scanf(" %d,%d,%d", &x, &y, &size) != EOF;) {
		vector<P> drop;
		if(size == 1) drop = small;
		else if(size == 2) drop = midium;
		else drop = big;
		for(int i = 0, n = drop.size(); i < n; i++) {
			int nx = x + drop[i].first;
			int ny = y + drop[i].second;
			if(0 <= nx && nx < 10 && 0 <= ny && ny < 10) {
				field[nx][ny]++;
			}
		}
	}
#if 0
	for(int i = 0; i < 10; i++) {
		for(int j = 0; j < 10; j++) {
			printf("%d", field[j][i]);
		}
		puts("");
	}
#endif
	int white = 0;
	int most = 0;
	rep(l, 10) {
		white += count(field[l], field[l] + 10, 0);
		most = max(most, *max_element(field[l], field[l] + 10));
	}
	printf("%d\n%d\n", white, most);
	return 0;
}