#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <numeric>
#include <cmath>
#include <climits>
#include <limits>
#include <cfloat>
#include <fstream>
using namespace std;

class Parser
{
public:
	string exp;
	int p;
	int expression (void );
	int term (void );
	int factor (void );
private:

};

int Parser::expression (void)
{
	int value = term ();

	while (exp[p] == '+' || exp[p] == '-' ){
		if (exp[p] == '+' ){
			++p; value += term();
		}else{
			++p; value -= term();
		} // end if
	} // end while

	return value;
}

int Parser::term (void)
{
	int value = factor();

	while (exp[p] == '*' || exp[p] == '/' ){
		if (exp[p] == '*'){
			++p; value *= factor();
		}else{
			++p; value /= factor();
		} // end if
	} // end while

	return value;
}

int Parser::factor (void)
{
	int value = 0;

	if (exp[p] == '('){
		++p; value = expression(); ++p;
	}else{
		while (isdigit(exp[p]) ){
			value = value * 10 + exp[p] - '0';
			++p;
		} // end while
	} // end if
	
	return value;
}

int main()
{
//	cut here before submit 
//	freopen("testcase.sc", "r", stdin);

	Parser parser;
	string str = "";
	int n;

	getline (cin, str );
	stringstream ssn(str);
	ssn >> n;

	int i;
	for (i = 0; i < n; ++i){
		getline (cin, str );
		parser.exp = str;
		parser.p = 0;
		cout << parser.expression() << endl;
	} // end loop
		
	return 0;
}