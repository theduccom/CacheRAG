#define _USE_MATH_DEFINES
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<list>
#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<cstring>
#include<stack>
using namespace std;

int p;
string S;

int num();
int factor();
int term();
int calc();

int num(){
	int n = 0;
	while(p<S.size()-1){
		if(isdigit(S[p])) n = n*10+S[p]-'0';
		else break;
		p++;
	}
	return n;
}

int factor(){
	int n;
	if(S[p]=='('){
		p++; n = calc(); p++;
	}
	else n = num();
	return n;
}

int term(){;
	int n = factor();
	while(p<S.size()-1){
		if(S[p]=='*') p++, n *= factor();
		else if(S[p]=='/') p++, n /= factor();
		else break;
	}
	return n;
}

int calc(){
	int n = term();
	while(p<S.size()-1){
		if(S[p]=='+') p++, n += term();
		else if(S[p]=='-') p++, n -= term();
		else break;
	}
	return n;
}

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>S;
		p = 0;
		printf("%d\n",calc());
	}
	return 0;
}