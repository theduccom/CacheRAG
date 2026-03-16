#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef complex<double> Point;

int calculate(const char* str, int begin, int end);
int getNumber(const char* str, int begin, int end)
{
	bool minus = false;
	
	if(str[begin] == '('){
		int depth = 1;
		int index;
		for(index=begin+1; depth; ++index){
			depth += str[index] == '(';
			depth -= str[index] == ')';
		}
		return calculate(str, begin+1, index-1);
	}
	else if(str[begin] == '-'){
		minus = true;
		++begin;
	}else if(str[begin] == '+')
		++begin;
	
	int num = 0;
	for(int i=begin; i<end && isdigit(str[i]); ++i)
		num = num*10 + str[i] - '0';
	if(minus)
		num *= -1;
	return num;
}

int getTerm(const char* str, int begin, int end)
{
	int num = 1;
	int index = begin;
	int depth = 0;
	char operation = '*';
	for(int i=begin; i<=end; ++i){
		if(i<end){
			depth += str[i] == '(';
			depth -= str[i] == ')';
		}
		
		if(depth == 0){
			if(i==end || str[i] == '*' || str[i] == '/'){
				if(operation == '*')
					num *= getNumber(str, index, i);
				if(operation == '/')
					num /= getNumber(str, index, i);
				if(i<end)
					operation = str[i];
				index = i+1;
			}
		}
	}

	return num;
}

int calculate(const char* str, int begin, int end)
{
	int num = 0;
	int index = begin;
	int depth = 0;
	char operation = '+';
	for(int i=begin; i<=end; ++i){
		if(i<end){
			depth += str[i] == '(';
			depth -= str[i] == ')';
		}
		if(depth == 0){
			if(i==end || str[i] == '+' || str[i] == '-'){
				if(operation == '+')
					num += getTerm(str, index, i);
				if(operation == '-')
					num -= getTerm(str, index, i);
				if(i<end)
					operation = str[i];
				index = i+1;
			}
		}
	}
	
	return num;
}

int main()
{
	int n;
	scanf("%d", &n);
	rep(i, n){
		char str[128];
		scanf("%s", str);
		printf("%d\n", calculate(str, 0, strlen(str)-1));
	}

	return 0;
}