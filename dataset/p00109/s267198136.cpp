#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reg(i,a,b) for(int i=(a);i<=(b);i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=(b);i>=(a);i--)
typedef long long int lli;
typedef pair<int,int> mp;
#define fir first
#define sec second
#define IINF INT_MAX
#define LINF LLONG_MAX

typedef string::iterator state;

lli addsub(state& s);
lli muldiv(state& s);
lli parent(state& s);
lli number(state& s);

lli number(state& s){
	lli res = 0;
	if(*s=='('){
		res = parent(s);
	}
	else if('0'<=*s && *s<='9'){
		while('0'<=*s && *s<='9'){
			res*=10;
			lli nc = *s-'0';
			res += nc;
			s++;
		}
	}
	else printf("error number\n");
	return res;
}

lli parent(state& s){
	if(*s!='(')printf("error kakko\n");
	s++;
	lli res = addsub(s);
	if(*s!=')')printf("error kokka\n");
	s++;
	return res;
}

lli muldiv(state& s){
	lli res = number(s);
	while(1){
		if(*s=='*'){
			s++;
			res *= number(s);
		}
		else if(*s=='/'){
			s++;
			res /= number(s);
		}
		else break;
	}
	return res;
}

lli addsub(state& s){
	lli res = muldiv(s);
	while(1){
		if(*s=='+'){
			s++;
			res += muldiv(s);
		}
		else if(*s=='-'){
			s++;
			res -= muldiv(s);
		}
		else break;
	}
	return res;
}


int main(void){
	int n;
	scanf("%d",&n);
	rep(i,n){
		char s[105];
		scanf("%s",s);
		string ns(s);
		state is = ns.begin();
		printf("%lld\n",addsub(is));
		if(*is!='=')printf("error finish\n");
	}
	return 0;
}