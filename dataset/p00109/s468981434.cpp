#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>


using namespace std;
typedef long long ll;
const int MODULO = 1000000007;
const int INF = 100000000; //1e8

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
typedef complex<double> Cd;

int expr(char *& s);

int val(char *& s){
	if(*s == '('){
		s++;
		int ret = expr(s);
		s++;
		return ret;
	}

	int v = 0;
	while(*s >= '0' && *s <= '9'){
		v *= 10;
		v += *s - '0';
		s++;
	}
	return v;
}

int pri(char *& s){
	int l = val(s);
	while(true){
		char ope = *s;
		if(ope != '*' && ope != '/')
			return l;
		s++;
		int r = val(s);
		if(ope == '*')
			l *= r;
		else
			l /= r;
	}
}

int expr(char *& s){
	int l = pri(s);
	while(true){
		char ope = *s;
		if(ope != '+' && ope != '-')
			return l;
		s++;
		int r = pri(s);
		if(ope == '+')
			l+=r;
		else
			l-=r;
	}
}

void solve()
{
	char s[256];
	cin>>s;
	char *p = s;
	cout << expr(p) << endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}