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

int co[110];
char k;
int a;

int main(){
	while (cin >> a){
		REP(i, 100){
			co[i] = -1;
		}
		co[a] = 1;
		REP(i, 4){
			cin >> k >> a;
			if (co[a] == -1){
				co[a] = 1;
			}
			else co[a]++;
		}

		bool f = 0;
		for (int i = 1; i <= 9; i++){
			if (co[i]==1 && co[i + 1]==1 && co[i + 2]==1 && co[i + 3]==1 && co[i + 4]==1){
				cout << "straight" << endl;
				f = 1;
				break;
			}
		}
		if (f)continue;
		if (co[1]==1 && co[10]==1 && co[11]==1 && co[12]==1 && co[13]==1){
			cout << "straight" << endl;
			continue;
		}

		int p2 = 0, p3 = 0, p4 = 0;
		REP(i, 14){
			if (co[i] == 4)p4++;
			if (co[i] == 3)p3++;
			if (co[i] == 2)p2++;
		}
		if (p4)	cout << "four card" << endl;
		else if (p3&&p2)cout << "full house" << endl;
		else if (p3)cout << "three card" << endl;
		else if (p2 == 2)cout << "two pair" << endl;
		else if (p2)cout << "one pair" << endl;
		else cout << "null" << endl;
	}
}