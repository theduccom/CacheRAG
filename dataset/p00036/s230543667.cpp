#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define MAX_N 5001
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;
typedef vector<ll> V;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;

string f[10];

int main(){
	while (cin >> f[0]){
		FOR(i, 1, 8){
			cin >> f[i];
		}
		REP(i, 8){
			REP(j, 8){
				if (f[i][j] == '1'){
					if (i+3<8&&f[i + 3][j] == '1'){
						cout << 'B' << endl;
					}
					if (j+3<8&&f[i][j + 3] == '1'){
						cout << 'C' << endl;
					}
					if (i + 2 < 8 && j - 1 >= 0 && f[i + 2][j - 1] == '1'){
						cout << 'D' << endl;
					}
					if (i + 2 < 8 && j + 1 < 8 && f[i + 2][j + 1] == '1'){
						cout << 'F' << endl;
					}
					if (i + 1 < 8 && j + 1 < 8 &&
						f[i + 1][j] == '1'&&f[i][j + 1] == '1'&&f[i + 1][j + 1] == '1'){
						cout << 'A' << endl;
					}
					if (i + 1 < 8 && j + 2 < 8 && f[i + 1][j + 2] == '1'){
						cout << 'E' << endl;
					}
					if (i + 1 < 8 && j - 1 >= 0 && j + 1 < 8 &&
						f[i + 1][j - 1] == '1'&&f[i][j + 1] == '1'){
						cout << 'G' << endl;
					}
					break;
				}
			}
		}
	}
}