//TEMPLATE BEGIN
//#define ONLINE_JUDGE
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cctype>
#include <climits>
#include <cassert>
//#include <ctime>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <functional>
#include <algorithm>
#include <complex>
#include <bitset>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
using namespace std;

#define FOR(i, a, b) for (int (i) = (a); (i) <= (b); ++ (i))
#define ROF(i, a, b) for (int (i) = (a); (i) >= (b); -- (i))
#define FOREDGE(i, u, head, next) for (int (i) = (head[(u)]); (i); (i) = (next[(i)]))
#define FORSTL(it, A) for (__typeof((A).begin()) it = (A).begin(); it != (A).end(); ++ it)
#define CLR(a, b) memset((a), (b), sizeof (a))
#define CPY(a, b) memcpy((a), (b), sizeof (a))
#define DEBUG cerr << "debug" << endl
#define STAR cerr << "**********" << endl

#define RT return
#define BK break
#define CT continue
#define ALL(x) (x).begin(), (x).end()
#define HEAP priority_queue
#define st first
#define nd second
#define pf push_front
#define pb push_back
#define ppf pop_front
#define ppb pop_back
#define mp make_pair
#define re real()
#define im imag()

#define LIST0(A, n) {						\
	FOR (i, 0, n - 1) printf("%d ", A[i]);	\
	printf("\n");							\
}											\

#define LIST1(A, n) {						\
	FOR (i, 1, n) printf("%d ", A[i]);		\
	printf("\n");							\
}											\

#define SHOW0(A, n, m) {					\
	FOR (i, 0, n - 1) {						\
		FOR (j, 0, m - 1)					\
			printf("%d ", A[i][j]);			\
		printf("\n");						\
	}										\
}											\

#define SHOW1(A, n, m) {					\
	FOR (i, 1, n) {							\
		FOR (j, 1, m)						\
			printf("%d ", A[i][j]);			\
		printf("\n");						\
	}										\
}											\

typedef long long LL;
typedef double DB;
typedef long double LDB;
typedef unsigned int UINT;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<DB> VB;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef map<int, int> MII;
typedef map<LL, LL> MLL;
typedef map<int, string> MIS;
typedef map<string, int> MSI;

const int INF(0x3f3f3f3f);
const LL LINF(0x3f3f3f3f3f3f3f3fLL);
const DB DINF(1e20);
const DB EPS(1e-12); //adjustable
const DB PI(acos(-1.0));

inline DB cot(DB x) { RT 1.0 / tan(x); }
inline DB sec(DB x) { RT 1.0 / cos(x); }
inline DB csc(DB x) { RT 1.0 / sin(x); }

template<class T> inline T max(T a, T b, T c) { RT max(max(a, b), c); }
template<class T> inline T max(T a, T b, T c, T d) { RT max(max(a, b), max(c, d)); }
template<class T> inline T min(T a, T b, T c) { RT min(min(a, b), c); }
template<class T> inline T min(T a, T b, T c, T d) { RT min(min(a, b), min(c, d)); }

template<class T> inline void Scan(T& x) { //int, LL
    char c;
    for (c = getchar(); c <= ' '; c = getchar()) ;
    bool ngt(c == '-');
    if (ngt) c = getchar();
    for (x = 0; c > ' '; c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    if (ngt) x = -x;
}
template<class T> inline void Scan(T& x, T& y) { Scan(x), Scan(y); }
template<class T> inline void Scan(T& x, T& y, T& z) { Scan(x), Scan(y), Scan(z); }
//TEMPLATE END

string str;
map<string, int> ans;
map<string, bool> vis;
queue<string> Q;

void Init() {
	string sta = "01234567";
	ans[sta] = 0;
	vis[sta] = true;
	Q.push(sta);
	while (!Q.empty()) {
		string s = Q.front(), t = s;
		Q.pop();
		int zero = s.find('0');
		if (zero != 0 && zero != 4) {
			swap(t[zero], t[zero - 1]);
			if (!vis[t]) {
				vis[t] = true;
				ans[t] = ans[s] + 1;
				Q.push(t);
			}
			swap(t[zero], t[zero - 1]);
		}
		if (zero != 3 && zero != 7) {
			swap(t[zero], t[zero + 1]);
			if (!vis[t]) {
				vis[t] = true;
				ans[t] = ans[s] + 1;
				Q.push(t);
			}
			swap(t[zero], t[zero + 1]);
		}
		if (zero <= 3) {
			swap(t[zero], t[zero + 4]);
			if (!vis[t]) {
				vis[t] = true;
				ans[t] = ans[s] + 1;
				Q.push(t);
			}
			swap(t[zero], t[zero + 4]);
		}
		if (zero >= 4) {
			swap(t[zero], t[zero - 4]);
			if (!vis[t]) {
				vis[t] = true;
				ans[t] = ans[s] + 1;
				Q.push(t);
			}
			swap(t[zero], t[zero - 4]);
		}
	}
}

void Main() {
	Init();
	while (getline(cin, str)) {
		istringstream ss(str);
		string sta = "", c;
		while (ss >> c) sta += c;

		cout << ans[sta] << endl;
	}
}

int main() {
	Main();
    RT 0;
}
//imagasaikou!