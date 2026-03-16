#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;
/*
int main(){
	int c=0;
	string s;
	while(cin>>s){
		//if(s=="0") break;
		if(s.find("apple")==0) s.replace(0,5,"peach");
		else if(s.find("peach")==0) s.replace(0,5,"apple");
		if(c==0) cout<<s;
		else cout<<" "<<s;
		c++;
	}
	cout<<endl;
}
*/
/*
vector<string> split(const string &s,char c=' '){
	vector<string> ret;
	stringstream ss(s);
	string t;
	while(getline(ss,t,c)){
		ret.pb(t);
	}
	return ret;
}

int main(){
	string s,ans;
	getline(cin,s);
	vector<string> str=split(s,' ');
	rep(i,0,str.size()){
		string ss=str[i];
		if(i) ans+=" ";
		if(ss.find("apple")==0) ss.replace(0,5,"peach");
		else if(ss.find("peach")==0) ss.replace(0,5,"apple");
		ans+=ss;
	}
	o(ans);
}*/

int main(){
	string s;
	getline(cin,s);
	string kw[2]={"apple","peach"};
	string cw[2]={"changetopeac","changetoappl"};
	rep(i,0,2){
		while(1){
			if(s.find(kw[i])!=string::npos){
				s.replace(s.find(kw[i]),5,cw[i]);
			}
			else break;
		}
	}
	//o(s);
	rep(i,0,2){
		while(1){
			if(s.find(cw[i])!=string::npos){
				s.replace(s.find(cw[i]),12,kw[1-i]);
			}
			else break;
		}
	}
	o(s);
}