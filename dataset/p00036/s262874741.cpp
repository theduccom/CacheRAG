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

#define VECTOR(a) VECTOR_((a), sizeof(a) / sizeof(a[0]))

template <typename T>
std::vector<T> VECTOR_(T *array, std::size_t size) {
  return std::vector<T>(array, array + size);
}

int main(){
	int m[] = {33,1111,15,132,63,231,36};
	for(int a[8]; cin >> a[0]; ) {
		rep(i, 7) cin >> a[i + 1];
		rep(i, 8) {
			int b = 0;
			rep(j, 10) {
				if(a[i] % 10) b += (1 << j);
				a[i] /= 10;
			}
			a[i] = b;
		}
		for(; ; ) {
			bool flg = false;
			rep(j, 8) flg |= a[j] & 1;
			if(!flg) rep(j, 8) a[j] >>= 1;
			else break;
		}
		int k = 0;
		rep(i, 8) if(a[i] != 0) {
			k = k * 10 + a[i];
		}
		rep(i, 7) if(m[i] == k) cout << (char)('A' + i) << endl;
	}
	
	return 0;
}