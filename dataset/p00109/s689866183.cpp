#include <stdio.h>
#include <cctype>
#include <limits.h>
#include <math.h>
#include <complex>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>

#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) static_cast<bitset<16> >(x)
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
#define if_range(x, y, w, h) if (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};
using namespace std;
typedef long long ll;
typedef pair<ll, int> P;
typedef vector<vector<int> > VVI;
const int INF = 1e9;

string S;

int expr(int &pos);

// 数
int number(int &pos)
{
	int res=0;
	while (isdigit(S[pos])) {
		res *= 10;
		res += S[pos]-'0';
		pos++;
	}
	return res;
}

// ()か数
int factor(int &pos)
{
	int res=0;
	
	if (S[pos] == '(') {
		pos++; // skip '('
		res = expr(pos);
		pos++; // skip ')'
	} else {
		res = number(pos);
	}
	
	return res;
}

// 乗算
int term(int &pos)
{
	int res = factor(pos);
	while (1) {
		if (S[pos] == '*') {
			pos++; // skip '*'
			res *= factor(pos);
		} else if (S[pos] == '/') {
			pos++; // skip '/'
			res /= factor(pos);
		} else {
			break;
		}
	}
	return res;
}

// 四則演算
int expr(int &pos)
{
	int res = term(pos);
	
	while (1) {
		if (S[pos] == '+') {
			pos++; // skip '+'
			res += term(pos);
		} else if (S[pos] == '-') {
			pos++; // skip'-'
			res -= term(pos);
		} else {
			break;
		}
	}
	return res;
}

int main()
{
	int N;
	cin>>N;
	cin.ignore();
	rep(i, N) {
		getline(cin, S);
		int pos = 0;
		cout << expr(pos) << endl;
	}
}