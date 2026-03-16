#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <numeric>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define ALL(v) (v).begin(), (v).end()
#define REV(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

static const double eps = 1e-9;

typedef pair<int, int> p;
typedef long long ll;

template<class t>
inline t sq(t a){return a*a;}

int expr();
int term();
int fact();

string s;
int ptr;
int expr(){
	int x = term();
	while(s[ptr] == '+' || s[ptr] == '-'){
		if(s[ptr] == '+'){
			ptr++;
			x += term();
		}else{
			ptr++;
			x -= term();
		}
	}
	return x;
}

int term(){
	int x;
	x = fact();
	while(s[ptr] == '*' || s[ptr] == '/'){
		if(s[ptr] == '*'){
			ptr++;
			x *= fact();
		}
		else if(s[ptr] == '/'){
			ptr++;
			x/= fact();
		}
	}

	return x;
}

int fact(){
	int x = 0, y = 1;
	if(s[ptr] == '+') ptr++;
	if(s[ptr] == '-'){
		y = -1;
		ptr++;
	}
	if(s[ptr] == '('){
		ptr++;
		x = expr();
		ptr++;
	}else{
		while('0' <= s[ptr] && s[ptr] <= '9'){
			x *= 10;
			x += (s[ptr]-'0');
			ptr++;
		}
	}
	return x*y;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		ptr = 0;
		cout << expr() << endl;
	}

	return 0;
}