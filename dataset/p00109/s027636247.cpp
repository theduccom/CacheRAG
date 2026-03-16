#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstdio>
using namespace std;
typedef long long ll;
typedef string::const_iterator State;
#define rep(i,n) for(int i=0;i<(n);i++)

class Parser{
public:
	int expression(State &begin){
		int ret = term(begin);
		for(;;){
			if(*begin == '+'){
				begin++;
				ret += term(begin);
			}else if(*begin == '-'){
				begin++;
				ret -= term(begin);
			}else{
				break;
			}
		}
		return ret;
	}
	int term(State &begin){
		int ret = factor(begin);
		for(;;){
			if(*begin == '*'){
				begin++;
				ret *= factor(begin);
			}else if(*begin == '/'){
				begin++;
				ret /= factor(begin);
			}else{
				break;
			}
		}
		return ret;
	}
	int factor(State &begin){
		int ret;
		if(*begin == '('){
			begin++;//'('?????????
			ret = expression(begin);
			begin++;//')'?????????
		}else{
			ret = number(begin);
		}
		return ret;
	}
	int number(State &begin){
		int ret = 0;
		while(isdigit(*begin)){
			ret *= 10;
			ret += *begin - '0';
			begin++;
		}
		return ret;
	}
};

int main(void){
	int n; cin >> n;
	rep(i, n){
		Parser ps;
		string s; cin >> s;
		string tmp = s.substr(0, s.size() - 1);
		// cout << tmp << endl;
		State begin = s.begin();
		int ret = ps.expression(begin);
		printf("%d\n", ret);
	}
	return 0;
}