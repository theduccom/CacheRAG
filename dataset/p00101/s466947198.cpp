#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	int n;
	//cin>>n;
	string t;
	getline(cin,t);
	n=atoi(t.c_str());
	rep(i,0,n){
		string s;
		getline(cin,s);
		//o(" "<<s);
		while(1){
			if(s.find("Hoshino")!=string::npos){
				s.replace(s.find("Hoshino"),7,"Hoshina");
			}
			else break;
		}
		o(s);
	}
}