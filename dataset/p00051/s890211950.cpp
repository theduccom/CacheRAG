#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
int mtt;cin>>mtt;
for(int mttt=0;mttt<mtt;mttt++){
	string n,a,b;
	cin>>n;
	sort(n.begin(),n.end());
	a=n;
	sort(n.begin(),n.end(),greater<int>());
	b=n;
	cout<<stoi(b)-stoi(a)<<endl;
}
	return 0;
}