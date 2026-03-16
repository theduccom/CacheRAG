#include <iostream>
#include <string>

using namespace std;

string s;

bool isDigit(char c)
{
	return (c >= '0' && c <= '9');
}
int parseNumber(string &s, int &pos)
{
	int ret = 0;
	while(1){
		if(isDigit(s[pos])) ret *= 10, ret += s[pos]-'0';
		else break;
		pos++;
	}
	return ret;
}
int parseExp(string &s, int &pos);
int parseFactor(string &s, int &pos)
{
	if(s[pos] == '('){
		pos++;
		int ret = parseExp(s, pos);
		pos++;
		return ret;
	}
	else if(isDigit(s[pos])) return parseNumber(s, pos); 
}
int parseTerm(string &s, int &pos)
{
	int ret = 1;
	ret *= parseFactor(s, pos);
	while(1){
		if(s[pos] == '*'){
			pos++;
			ret *= parseFactor(s, pos);
		}
		else if(s[pos] == '/'){
			pos++;
			ret /= parseFactor(s, pos);
		}
		else break;
	}
	return ret;
}
int parseExp(string &s, int &pos)
{
	int ret = 0;
	ret += parseTerm(s, pos);
	while(1){
		if(s[pos] == '+'){
			pos++;
			ret += parseTerm(s, pos);
		}
		else if(s[pos] == '-'){
			pos++;
			ret -= parseTerm(s, pos);
		}
		else break;
	}
	return ret;
}

int main(void)
{
	int T;
	cin >> T;
	for(int t = 0; t < T; t++){
		cin >> s;
		int pos = 0;
		cout << parseExp(s, pos) << endl;
	}
	
	return 0;
}
