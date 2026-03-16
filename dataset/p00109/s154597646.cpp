#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<typeinfo>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
//#define int ll
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
//#define mt make_tuple
//typedef tuple<pii,int,int> tp;
//typedef vector<tp> vt;
template<typename A,typename B>bool cmin(A &a,const B &b){return a>b?(a=b,true):false;}
template<typename A,typename B>bool cmax(A &a,const B &b){return a<b?(a=b,true):false;}
//template<class C>constexpr int size(const C &c){return (int)c.size();}
//template<class T,size_t N> constexpr int size(const T (&xs)[N])noexcept{return (int)N;}
const double PI=acos(-1);
const double EPS=1e-7;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 : 1e9;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
typedef string::const_iterator State;
Def expr(State &i);
Def term(State &i);
Def factor(State &i);
Def number(State &i);
void consume(State &i,char expected){
	if(*i==expected)i++;
	else{
		exit(0);
	}
}
Def expr(State &i){
	Def out=term(i);
	while(*i=='+'||*i=='-'){
		char op=*i;
		i++;
		Def out1=term(i);
		if(op=='+')out+=out1;
		else out-=out1;
	}
	return out;
}
Def term(State &i){
	Def out=factor(i);
	while(*i=='*'||*i=='/'){
		char op=*i;
		i++;
		Def out1=factor(i);
		if(op=='*')out*=out1;
		else out/=out1;
	}
	return out;
}
Def factor(State &i){
	if(isdigit(*i))return number(i);
	//'('
	i++;
	Def out=expr(i);
	i++;
	return out;
}
Def number(State &i){
	Def out=0;
	while(isdigit(*i))out=out*10+*(i++)-'0';
	return out;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		State begin=s.begin();
		cout<<expr(begin)<<endl;
	}
}