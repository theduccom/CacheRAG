//include----------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

//using namespace--------------------------------------------------------------------------------------------------------------
using namespace std;

//define-----------------------------------------------------------------------------------------------------------------------
#define rep(i, n) for(int i = 0; i < n; i++)
#define FOR(i, s, n) for(int i = s; i < n; i++)
#define per(i, n) for(int i = n; i >= 0; i--)
#define ROF(i, s, n) for(int i = s; i >= n; i--)
#define FORIT(i, A) for (auto i : A)
#define PRINT(x) cout << (x) << "\n"
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define FOREACH(i, n) for (__typeof((n).begin()) i = (n).begin(); i != (n).end(); ++i)
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define INF 1 << 25
#define CLR(a) memset((a), 0 ,sizeof(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
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
const double PI = acos(-1.0);

//global-----------------------------------------------------------------------------------------------------------------------
char str[100];

//function---------------------------------------------------------------------------------------------------------------------
int main(){
	while (scanf("%s", str) != EOF){
		int n = strlen(str);
		rep(i, n){
			if (str[i] == '@'){
				rep(j, str[i + 1] - '0')
					printf("%c", str[i + 2]);
				i += 2;
			}
			else
			{
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}