#include <bits/stdc++.h>
using namespace std;

typedef int Int;
typedef string::const_iterator Iter;

Int eval(const string&);
Int expr(Iter&);
Int term(Iter&);
Int factor(Iter&);
Int number(Iter&);

Int eval(const string &s){
	Iter it = s.begin();
	return expr(it);
}

Int expr(Iter &it){
	Int res = term(it);
	while (true){
		if (*it == '+'){
			++it;
			res += term(it);
		}
		else if (*it == '-'){
			++it;
			res -= term(it);
		}
		else return res;
	}
}

Int term(Iter &it){
	Int res = factor(it);
	while (true){
		if (*it == '*'){
			++it;
			res *= factor(it);
		}
		else if (*it == '/'){
			++it;
			res /= factor(it);
		}
		else return res;
	}
}

Int factor(Iter &it){
	if (*it == '('){
		++it;
		Int res = expr(it);
		++it;
		return res;
	}
	else return number(it);
}

Int number(Iter &it){
	Int res = 0;
	while (isdigit(*it)){
		res = res * 10 + (*it - '0');
		++it;
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		cout << eval(s) << endl;
	}
}