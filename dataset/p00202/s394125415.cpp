
//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//conversion
//------------------------------------------
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

//math
//-------------------------------------------
template<class T> inline T sqr(T x) {return x*x;}

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int DX[] = {0, 1, 0, -1};
const int DY[] = {-1, 0, 1, 0};


//clear memory
#define CLR(a) memset((a), 0 ,sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

#define MAX_COUNT 1000000 + 1

vector<bool> prime_number(LL n){
	vector<bool> res(n + 1);
	for(LL i = 2; n >=  i * i; i++){
		if(res[i]  == false){
			for(LL j = i + i; n >= j; j += i){
				res[j] = true;
			}
		}
	}
	return res;
}


int main(int argc, char const *argv[]){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n, x;
	vector<bool> primes = prime_number(1000000);
	while(true){
		cin >> n >> x;
		if(n == 0 && x == 0) break;
		vector<vector<bool> >  dp(n + 1, vector<bool>(x + 1));
		VI items(n);
		REP(i, n){
			cin >> items[i];
		}
		dp[0][0] = true;
		REP(i, n){
			REP(j, x + 1){
				int item_value = items[i];
				int v = item_value + j;

				if(dp[i][j]){
					dp[i + 1][j] = true;
					if(v < x + 1)
						dp[i][v] = true;
				}
			}
		}
		int ans = -1;

		for(int i = x; i >= 0; i--){
			if(dp[n][i] && !primes[i]){
				ans = i;
				break;
			}
		}
		if(ans > 0){
			cout <<ans << endl;
		}else{
			cout << "NA" << endl;
		}
	}
	return 0;
}