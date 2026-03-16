#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<set>
#include<map>
#define REP(i, N) for(ll i = 0; i < N; ++i)
#define FOR(i, a, b) for(ll i = a; i < b; ++i)
#define ALL(a) (a).begin(),(a).end()
#define pb push_back
#define INF (long long)1000000000
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
int dh[4] = {1, 0, -1, 0};
int dw[4] = {0, 1, 0, -1};

int roc = 0;
string s;
int insu();
int kou();
int shiki();

int insu() {
	if(s[roc] >= '0' && s[roc] <= '9') {
		int j = roc;
		while(roc < s.size() && s[roc] >= '0' && s[roc] <= '9') ++roc;
		return stoi(s.substr(j, roc - j));
	} else {
		++roc;
		int res = shiki();
		++roc;
		return res;
	}
}

int kou() {
	int res = insu();
	while (s[roc] == '*' || s[roc] == '/') {
		if(s[roc] == '*') {
			++roc;
			res *= insu();
		}
		else {
			++roc;
			res /= insu();
		}
	}
	return res;
}

int shiki() {
	int res = kou();
	while (s[roc] == '+' || s[roc] == '-') {
		if(s[roc] == '+') {
			++roc;
			res += kou();
		}
		else {
			++roc;
			res -= kou();
		}
	}
	return res;
}

int main(void) {
	int n;
	cin>>n;
	REP(roop, n) {
		roc = 0;
		cin>>s;
		s.pop_back();
		cout<<shiki()<<endl;
	}
}