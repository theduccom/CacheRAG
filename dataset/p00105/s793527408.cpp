#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
#define SZ(n)  (int)n.size()
#define dump(x) cerr<<#x<<" = "<<(x)<<endl;
#define debug(x)cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) for(int i=0;i<n;i++)
#define MP make_pair
#define PB push_back
int main(){
	map<string ,vector<int> >ta;
	string s;
	int t;
	while(cin>>s>>t){
	ta[s].push_back(t);
	}
	map<string , vector<int> >::iterator it=ta.begin();
	for(;it!=ta.end();it++){
		cout<<(*it).first<<endl;
		vector<int>tmp=(*it).second;
		sort(tmp.begin(),tmp.end());
		for(int i=0;i<SZ(tmp);i++){
		cout<<tmp[i];
		(i==SZ(tmp)-1)?cout<<endl:cout<<" ";
		}
	}
	return 0;
}