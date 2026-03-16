#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>

using namespace std;


#define all(c) ((c).begin()), ((c).end())
#define debug(c) cerr << "> " << #c << " = " << (c) << endl;
#define iter(c) __typeof((c).begin())
#define present(c, e) ((c).find((e)) != (c).end())
#define cpresent(c, e) (find(all(c), (e)) != (c).end())
#define tr(i, c) for (iter(c) i = (c).begin(); i != (c).end(); i++)
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i <= (int)(b); i++)

#define mp make_pair
#define fst first
#define snd second
#define pb push_back


const double EPS = 1e-10;


typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef complex<double> P;


int main(){
	int x1[] = {0, -1, 0, 1, 0};
	int y1[] = {-1, 0, 0, 0, 1};
	int x2[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
	int y2[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
	int x3[] = {0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0};
	int y3[] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
	int l[] = {5, 9, 13};
	int *xs[] = {x1, x2, x3};
	int *ys[] = {y1, y2, y3};
	char c;
	int m[100][100];
	rep(i, 100) rep(j, 100) m[i][j] = 0;
	for (int x, y, s; cin >> x >> c >> y >> c >> s; ) {
		rep(i, l[s - 1]) {
			m[y + ys[s - 1][i] + 20][x + xs[s - 1][i] + 20]++;
		}
	}
	int minc = 0, cnt = 0;
	rep(i, 10) rep(j, 10) {
		minc = max(minc, m[i + 20][j + 20]);
		if (m[i + 20][j + 20] == 0) cnt++;
	}
	cout << cnt << endl << minc << endl;
	
	return 0;
}