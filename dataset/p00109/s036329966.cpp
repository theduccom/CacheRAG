#include <iostream>
#include <cmath>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

int expr();
int term();
int fact();

char *p;
char inp[101];

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
	cin.getline(inp, sizeof(inp));
	p = inp;
	cout << expr() << endl;
    }
}

int expr(){
    int m = 0;
    m = term();
    while (*p == '+' || *p == '-'){
	if (*p == '+')
	    p++, m += term();
	else if (*p == '-')
	    p++, m -= term();
    }
    return m;
}

int term(){
    int m = 0;
    m = fact();
    while (*p == '*' || *p == '/'){
	if (*p == '*')
	    p++, m *= fact();
	else if (*p == '/')
	    p++, m /= fact();
    }
    return m;
}

int fact(){
    int m = 0;
    if (*p == '('){
	p++;
	m = expr();
	p++;
	return m;
    }
    else {
	while ('0' <= *p && *p <= '9'){
	    m *= 10;
	    m += *p - '0';
	    p++;
	}
    }
    return m;
}