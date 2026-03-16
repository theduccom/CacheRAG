#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
using namespace std;
#define INF (1<<25)
#define P(a,b) make_pair(a,b)

int id = 0;
string s;

int exp();
int term();
int fact();

int exp(){
	int ans = term();
	while(true){
		char c = s[id++];
		if(c == '+'){
			ans += term();
		}else if(c=='-'){
			ans -= term();
		}else{
			return ans;
		}
	}
}
int term(){
	int ans = fact();
	while(true){
		char c = s[id++];
		if(c == '*'){
			ans *= fact();
		}else if(c=='/'){
			ans /= fact();
		}else{
			id--;
			return ans;
		}
	}
	
}
int fact(){
	char c = s[id++];
	if(c=='(') return exp();
	if(c=='-') return -exp();
	if(c=='+') return  exp();
	int x = c - '0';
	while(true){
		c = s[id++];
		if('0' <= c && c <= '9'){
			x = x*10 + c - '0';
		}else{
			id--;
			return x;
		}
	}
}
int main(){
	int n;
	cin >> n;
	while(n--){
		cin >> s;
		id = 0;
		cout << exp() << endl;
	}
}