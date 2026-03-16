#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	string in;
	string ap = "apple";
	string pe = "peach";
	
	while(getline(cin,in)){
		vector<int> a,p;
		int id = 0;
		while( (id=in.find("apple",id))!=string::npos ){
			a.push_back(id);
			id++;
		}
		id = 0;
		while( (id=in.find("peach",id))!=string::npos ){
			p.push_back(id);
			id++;
		}
		rep(i,a.size()){
			rep(j,5)in[a[i]+j]=pe[j];
		}
		rep(i,p.size()){
			rep(j,5)in[p[i]+j]=ap[j];
		}
		cout << in << endl;
		//rep(i,a.size())printf("%d,",a[i]); puts("");
		//rep(i,p.size())printf("%d,",p[i]); puts("");
	}
	return 0;
}