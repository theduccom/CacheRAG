#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };
int expr(string& s, int& i);
int number(string& s, int& i){
	int val=0;
	do {
	val*=10;
	val += s[i] - '0';
	i++;
	} while ('0'<=s[i]&&s[i]<='9');
return val;
}
int factor(string& s, int& i){
	if (s[i] >= '0'&&s[i] <= '9')return number(s, i);

	i++;
	int val = expr(s, i);
	i++;
	return val;

}
int term(string& s, int& i){
	int val1 = factor(s, i);
	while (s[i] == '*' || s[i] == '/'){
		char c = s[i];
		i++;
		int val2 = factor(s, i);
		if (c == '*')
			val1 *= val2;
		else
			val1 /= val2;
	}
	return val1;

}
int expr(string& s, int& i){
	int val1 = term(s, i);
	while (s[i] == '+' || s[i] == '-'){
		char c = s[i];
		i++;
		int val2 = term(s, i);
		if (c == '+')
			val1 += val2;
		else
			val1 -= val2;
	}
	return val1;
}


int main() {
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		int i = 0;
		if (s[s.length()-1]=='=')
			s=s.substr(0,s.length()-1);
		cout << expr(s, i) << endl;
	}
}