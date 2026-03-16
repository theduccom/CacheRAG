#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<numeric>
#include<map>
#include<iostream>

#include<cassert>
using namespace std;
#define rep(i,n) for(int i = 0;i<((int)(n));i++)
#define reg(i,a,b) for(int i = ((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i = ((int)(n)-1);i>=0;i--)
#define ireg(i,a,b) for(int i = ((int)(b));i>=((int)(a));i--)
typedef long long ll;
typedef pair<ll, ll> mp;

string S;
int cur = 0;//?§£???????§???????

int expression();//????????£?¨?

int digit(){
	// assert(isdigit(S[cur]));
	// cout<<"S[cur]="<<S[cur]<<endl;;
	int n = S[cur++] - '0';
	return n;
}

int number(){
	int n = digit();
	while(cur<S.size() && isdigit(S[cur]))n = n*10+digit();
	return n;
}

int factor(){
	if(S[cur]!='(')return number();
	cur++;
	int n=expression();
	// assert(S[cur++]==')');
	cur++;
	return n;
}

int term(){
	int a = factor();
	while(cur<S.size() && (S[cur]=='*' || S[cur]=='/')){
		char op = S[cur++];
		int b = factor();
		if(op=='*')a*=b;else a/=b;
	}
	return a;
}

int expression() {
	int a = term();
	while (cur<S.size() && (S[cur] == '+' || S[cur] == '-')) { // ?¶???????????????????????¶???????
		char op = S[cur++];
		int b = term();
		if (op == '+')a+=b;else a-=b;
	}
	return a;
}

int main(){
	int N;
	int ans[50];
	cin>>N;
	rep(i,N){
		cur=0;
		cin>>S;
		S.resize(S.size()-1);
		ans[i]=expression();
	}
	rep(i,N)cout<<ans[i]<<endl;
	return 0;
}