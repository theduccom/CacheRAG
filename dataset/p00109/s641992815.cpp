#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>


using namespace std;

typedef string::const_iterator State;
class ParseError {};

int expression(State &begin);

//数字の列をパースして、その数を返す。
int number(State &begin){
	int ret=0;

	while(isdigit(*begin)){
		ret *= 10;
		ret += *begin -'0';
		begin++;
	}

	return ret;
}

// 括弧か数をパースして、その評価結果を返す。
int factor(State &begin) {
	if (*begin == '(') {
	        begin++; // '('を飛ばす。
	        int ret = expression(begin);
	        begin++; // ')'を飛ばす。
		return ret;
	} else {
        	return number(begin);
	}
}

//乗除の式をパースして、その評価結果を返す。
int term(State &begin){
	int ret = factor(begin);

	while(1){
		if(*begin=='*'){
			begin++;
			ret *= factor(begin);
		}else if(*begin=='/'){
			begin++;
			ret /= factor(begin);
		}else{
			break;
		}
	}

	return ret;
}

//四則演算の式をパースして、その評価結果を返す。
int expression(State &begin){
	int ret = term(begin);

	while(1){
		if(*begin=='+'){
			begin++;
			ret += term(begin);
		}else if(*begin=='-'){
			begin++;
			ret -= term(begin);
		}else if(*begin=='='){
			break;
		}else{
			break;
		}
	}

	return ret;
}

int main(){
	int I[100],Ii=0,n;
	string s;

	cin >> n;

	for(int i=0;i<n;i++){
		cin >> s;
		
		State begin = s.begin();
		int ans = expression(begin);
		I[Ii++] = ans;
	}

	for(int i=0;i<n;i++){
		cout << I[i] << endl;
	}

	return 0;
}