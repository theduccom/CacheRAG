#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int cal1();
int cal2();
int cal3();

int index;
string s;

int getNum(){
	int n = 0;
	for (; '0' <= s[index] && s[index] <= '9'; index++) n = n * 10 + s[index] - '0';
	return n;
}

int cal1(){
	int ret = cal2();
	while (1){
		if (s[index] == '+') {
			index++;
			ret += cal2();
		}
		else if (s[index] == '-') {
			index++;
			ret -= cal2();
		}
		else return ret;
	}
}

int cal2(){
	int ret = cal3();
	while (1){
		if (s[index] == '*') {
			index++;
			ret *= cal3();
		}
		else if (s[index] == '/') {
			index++;
			ret /= cal3();
		}
		else return ret;
	}
}

int cal3(){
	int ret = 0;
	int old = index;
	if (s[index] == '('){
		index++;
		ret = cal1();
		index++;
	}
	else {
		ret = getNum();
	}
	return ret;
}

int main(){
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; i++){
		index = 0;
		getline(cin, s);
		s.pop_back();
		cout << cal1() << endl;
	}
	return 0;
}