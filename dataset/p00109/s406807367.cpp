#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007


string s;



int calc(int b,int e){
	vector<int> v;
	vector<char> ope;
	for(int i=b; i<=e; i++){
		if(s[i]=='('){
			int o=1,c=0;
			for(int j=i+1; j<=e; j++){
				if(s[j]=='(')o++;
				if(s[j]==')'){
					c++;
					if(o==c){
						int a=calc(i+1,j);
						v.pb(a);
						i=j;
						break;
					}
				}
			}
		}
		else if(s[i]>='0'&&s[i]<='9'){
			for(int j=i+1; j<=e; j++){
				if(s[j]<'0'||s[j]>'9'){
					string t=s.substr(i,j);
					v.pb(atoi(t.c_str()));
					i=j-1;
					break;
				}
			}
		}
		else{
			ope.pb(s[i]);
		}
	}
	for(int i=0; i<ope.size(); i++){
		if(ope[i]=='*'){
			v[i+1]=v[i]*v[i+1];
			v[i]=0;
			ope[i]=(i==0?'+':ope[i-1]);
		}
		if(ope[i]=='/'){
			v[i+1]=v[i]/v[i+1];
			v[i]=0;
			ope[i]=(i==0?'+':ope[i-1]);
		}
	}
	for(int i=0; i<ope.size()-1; i++){
		if(ope[i]=='+'){
			v[0]+=v[i+1];
		}
		if(ope[i]=='-'){
			v[0]-=v[i+1];
		}
	}
	return v[0];
}


int main(){
	int n;
	cin>>n;
	rep(i,n){
		cin>>s;
		cout<<calc(0,s.size()-1)<<endl;
	}
}