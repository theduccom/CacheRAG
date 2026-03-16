#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<math.h>
#include<iomanip>
#include<set>
#include<numeric>
#include<cstring>
#include<cstdio>
#include<functional>
#include<bitset>
#include<limits.h>
#include<cassert>
#include <fstream>
#include <time.h>
#include <iterator>




#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define REVERSE(v,n) reverse(v,v+n);
#define VREVERSE(v) reverse(v.begin(), v.end());
#define ll long long
#define pb(a) push_back(a)
#define m0(x) memset(x,0,sizeof(x))
#define print(x) cout<<x<<endl;
#define pe(x) cout<<x<<" ";
#define lb(v,n) lower_bound(v.begin(), v.end(), n);
#define ub(v,n) upper_bound(v.begin(), v.end(), n);
#define int long long
#define all(x) (x).begin(), (x).end()
using namespace std;
int MOD = (ll)1000000000 + 7;
const ll INF = 1e17;
const double pi = acos(-1);
const double EPS = 1e-10;
typedef pair<int, int>P;

int expr(string& s, int& i);
int term(string& s, int& i);
int factor(string& s, int& i);
int number(string& s, int& i);

int expr(string& s, int& i) {
	int val = term(s, i);
	while (s[i]=='+'||s[i]=='-')
	{
		char op = s[i];
		i++;
		int val2 = term(s, i);
		if (op == '+')val += val2;
		else val -= val2;
	}
	return val;
}

int term(string &s, int &i) {
	int val = factor(s, i);
	while (s[i]=='*'||s[i]=='/')
	{
		char op = s[i];
		i++;
		int  val2 = factor(s, i);
		if (op == '*')val *= val2;
		else val /= val2;
	}
	return val;
}

int factor(string &s, int &i) {
	if (isdigit(s[i]))return number(s, i);
	i++;
	int ret = expr(s, i);
	i++;
	return ret;
}

int number(string &s, int &i) {
	int n = s[i++] - '0';
	while (isdigit(s[i])) {
		n = n * 10 + s[i++] - '0';
	}
	return n;
}

signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N;
	cin >> N;
	REP(i, N) {
		string str;
		cin >> str;
		int j = 0;
		print(expr(str, j));
	}
}

