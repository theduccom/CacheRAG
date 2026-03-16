//include----------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

//using namespace--------------------------------------------------------------------------------------------------------------
using namespace std;

//define-----------------------------------------------------------------------------------------------------------------------
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define FOR(i, s, n) for(int i = s; i < (int)n; i++)
#define per(i, n) for(int i = n; i >= 0; i--)
#define ROF(i, s, n) for(int i = s; i >= (int)n; i--)
#define FORIT(i, A) for (auto i : A)
#define PRINT(x) cout << (x) << "\n"
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define EACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define INF 1 << 25
#define CLR(a) memset((a), 0 ,sizeof(a))
#define dump(x) cerr << #x << " = " << (x) << "\n";
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << "\n";
#define sq(n) (n) * (n)

//typedef----------------------------------------------------------------------------------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
typedef unsigned int uint;
typedef unsigned long long ull;

//const------------------------------------------------------------------------------------------------------------------------
const double EPS = 1e-10;
const double PI = acos( -1.0 );

//global-----------------------------------------------------------------------------------------------------------------------
short n;
short prime[10000];
short many_prime = 2;
short mx = 1;

//function---------------------------------------------------------------------------------------------------------------------
int main() {
	while ( scanf( "%d", &n ) ) {
		if ( n == 0 ) {
			return 0;
		}
		many_prime = 2;
		mx = 1;
		prime[ 0 ] = 3;
		prime[ 1 ] = 5;
		for ( int i = 7; i <= n; i += 2 ) {
			bool check = true;
			for ( int j = 0; prime[ j ] * prime[ j ] <= i; j++ ) {
				if ( i % prime[ j ] == 0 ) {
					check = false;
					break;
				}
			}
			if ( check ) {
				prime[ many_prime ] = i;
				if ( prime[ many_prime ] - prime[ many_prime - 1 ] == 2 ) {
					mx = many_prime;
				}
				many_prime++;
			}
		}
		printf( "%d %d\n", prime[ mx - 1 ], prime[ mx ] );
	}
	return 0;
}