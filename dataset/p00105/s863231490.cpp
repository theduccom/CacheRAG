#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

vector<pair<string,int> > p;

int main() {
	string word;
	int page;
	while(cin>>word>>page){
		p.push_back(mp(word,page));
	}
	int i;
	pair<string,int> pp;
	pair<string,int> pre;
	pre.first="";
	bool f=true;
	for(i=0;i<p.size();i++){
		int j,k=0;
		pp=p[0];
		for(j=1;j<p.size()-i;j++){
			if(pp.first>p[j].first||pp.first==p[j].first&&pp.second>p[j].second){
				pp=p[j];
				k=j;
			}
		}
		if(pp.first!=pre.first){
			if(!f)cout<<endl;
			f=false;
			cout<<pp.first<<endl<<pp.second;
		}else{
			cout<<" "<<pp.second;
		}
		pre=pp;
		p[k]=p[p.size()-i-1];
	}
	cout<<endl;
	return 0;
}