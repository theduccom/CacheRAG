#include <bits/stdc++.h>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef vector<pll> vpll;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const ll INF=1ll<<60;
const double pi=acos(-1);
const double eps=1e-9;
const ll mod=1e9+7;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

int q,n;
string s;

class Analysis{
	public:
	int Num(int &I){
		int res=0;
		while(I<n&&isdigit(s[I])) res=10*res+(s[I]-'0'),I++;
		return res;
	}
	int Fact(int &I){
		int res;
		if(s[I]=='(') res=Exp(++I),I++;
		else res=Num(I);
		return res;
	}
	int Term(int &I){
		int res=Fact(I);
		while(I<n){
			if(s[I]=='*') res*=Fact(++I);
			else if(s[I]=='/') res/=Fact(++I);
			else break;
		}
		return res;
	}
	int Exp(int &I){
		int res=Term(I);
		while(I<n){
			if(s[I]=='+') res+=Term(++I);
			else if(s[I]=='-') res-=Term(++I);
			else break;
		}
		return res;
	}
};

Analysis A;

int main(){
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>s;
		s.pop_back();
		n=s.size();
		int I=0;
		cout<<A.Exp(I)<<endl;
	}
}
