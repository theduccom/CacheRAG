//#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define IN(a, b, x) (a<=x&&x<b)
#define MP make_pair
#define PB push_back
#define MOD 1000000007
#define INF (1LL<<30)
#define LLINF (1LL<<60)
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

signed main(void)
{
	int n;
	cin >> n;
	REP(i, n) {
		string s, t;
		cin >> s >> t;

		int dif = abs((int)s.size()-(int)t.size());
		//cout << "dif:" << dif << endl;
		string tmp = "";
		REP(i, dif) tmp += '0';
		//cout << tmp << endl;
		if(s.size() < t.size()) s = tmp + s;
		else t = tmp + t;
		//cout << s << " " << t << endl;

		bool flag = false;
		for(int i=t.size()-1; i>=0; --i) {
			int tmp = (t[i]-'0')+(s[i]-'0');
			if(flag) tmp++;
			flag = false;
			if(tmp >= 10) {tmp -= 10; t[i] = tmp+'0'; flag = true;}
			else {t[i] = tmp+'0';}
			//cout << t << endl;
		}
		if(flag) t = '1' + t;
		if(t.size() > 80) cout << "overflow" << endl;
		else cout << t << endl;
	}

	return 0;
}