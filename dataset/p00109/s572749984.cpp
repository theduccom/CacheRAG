#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int p;

int exp(string str);
int term(string str);
int fact(string str);

int exp(string str)
{
	int val = term(str);
	while(str[p] == '+' || str[p] == '-'){
		if(str[p++] == '+'){
			val += term(str);
		} else {
			val -= term(str);
		}
	}
	
	return val;
}

int term(string str)
{
	int val = fact(str);
	while(str[p] == '*' || str[p] == '/'){
		if(str[p++] == '*'){
			val *= fact(str);
		} else {
			val /= fact(str);
		}
	}
	
	return val;
}

int fact(string str)
{
	int val = 0;
	if(str[p] == '('){
		p++;
		val = exp(str);
		p++;
	} else {
		string s = "";
		while('0' <= str[p] && str[p] <= '9'){
			s += str[p++];
		}
		if(s.size() > 0){
			val = atoi(s.c_str());
		}
	}
	
	return val;
}

int main()
{
	int n;
	string str;
	
	while(cin >> n && n){
		while(n--){
			cin >> str;
			p = 0;
			cout << exp(str) << endl;
		}
	}
	
	return 0;
}