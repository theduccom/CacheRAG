#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,b) rng(i,0,b)
#define gnr(i,a,b) for(int i=int(b)-1;i>=a;i--)
#define per(i,b) gnr(i,0,b)
#define pb push_back
#define eb emplace_back
#define a first
#define b second
#define bg begin()
#define ed end()
#define all(x) x.bg,x.ed
#ifdef LOCAL
#define dmp(x) cerr<<__LINE__<<" "<<#x<<" "<<x<<endl
#else
#define dmp(x) void(0)
#endif

template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(a>b)a=b;}

template<class t> using vc=vector<t>;
template<class t> using vvc=vc<vc<t>>;

using pi=pair<int,int>;
using vi=vc<int>;

template<class t,class u>
ostream& operator<<(ostream& os,const pair<t,u>& p){
	return os<<"{"<<p.a<<","<<p.b<<"}";
}

template<class t> ostream& operator<<(ostream& os,const vc<t>& v){
	os<<"{";
	for(auto e:v)os<<e<<",";
	return os<<"}";
}

struct S{
	string s;
	int i;
	char nx(){
		return s[i];
	}
	bool dig(){
		return '0'<=nx()&&nx()<='9';
	}
	void inc(){i++;}
};

int expr(S&);
int term(S&);
int fact(S&s);
int num(S&);

int expr(S&s){
	int a=term(s);
	while(1){
		if(s.nx()=='+'){
			s.inc();
			a+=term(s);
		}else if(s.nx()=='-'){
			s.inc();
			a-=term(s);
		}else
			break;
	}
	return a;
}

int fdiv(int a,int b){
	return a/b-((a^b)<0&&a%b);
}

int term(S&s){
	int a=fact(s);
	while(1){
		if(s.nx()=='*'){
			s.inc();
			a*=fact(s);
		}else if(s.nx()=='/'){
			s.inc();
			a/=fact(s);
			//a=fdiv(a,fact(s));
		}else
			break;
	}
	return a;
}

int fact(S&s){
	if(s.nx()=='('){
		s.inc();
		int a=expr(s);
		s.inc();
		return a;
	}else{
		int a=0;
		while(s.dig()){
			a=a*10+s.nx()-'0';
			s.inc();
		}
		return a;
	}
}

void slv(){
	S s;
	cin>>s.s;
	s.i=0;
	cout<<expr(s)<<endl;
}

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	cout<<fixed<<setprecision(20);
	
	int n;cin>>n;
	rep(_,n)slv();
}

