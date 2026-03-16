#include <bits/stdc++.h>
using namespace std;

#define INF_LL (int64)1e18
#define INF (int32)1e9
#define REP(i, n) for(int64 i = 0;i < (n);i++)
#define FOR(i, a, b) for(int64 i = (a);i < (b);i++)
#define all(x) x.begin(),x.end()
#define fs first
#define sc second

using int32 = int_fast32_t;
using uint32 = uint_fast32_t;
using int64 = int_fast64_t;
using uint64 = uint_fast64_t;
using PII = pair<int32, int32>;
using PLL = pair<int64, int64>;

const double eps = 1e-10;

template<typename A, typename B>inline void chmin(A &a, B b){if(a > b) a = b;}
template<typename A, typename B>inline void chmax(A &a, B b){if(a < b) a = b;}

int64 exp(string&, int32&);
int64 term(string&, int32&);
int64 fact(string&, int32&);
int64 number(string&, int32&);

int64 exp(string& s, int32& p){
	int64 ret = term(s, p);
	while(p < s.size()){
		if(s[p] == '+'){
			p++;
			ret += term(s, p);
		}else if(s[p] == '-'){
			p++;
			ret -= term(s, p);
		}else{
			break;
		}
	}
	return ret;
}

int64 term(string& s, int32& p){
	int64 ret = fact(s, p);
	while(p < s.size()){
		if(s[p] == '*'){
			p++;
			ret *= fact(s, p);
		}else if(s[p] == '/'){
			p++;
			ret /= fact(s, p);
		}else{
			break;
		}
	}
	return ret;
}

int64 fact(string& s, int32& p){
	int64 ret = 0;
	if(s[p] == '('){
		p++;
		ret = exp(s, p);
		p++;
	}else{
		ret = number(s, p);
	}
	return ret;
}

int64 number(string& s, int32& p){
	int64 ret = 0;
	while(isdigit(s[p])){
		ret = ret*10+s[p]-'0';
		p++;
	}
	return ret;
}
int main(void){
	int32 N;
	cin >> N;

	REP(i, N){
		string s;
		int32 p = 0;
		cin >> s;
		cout << exp(s, p) << endl;
	}
}
