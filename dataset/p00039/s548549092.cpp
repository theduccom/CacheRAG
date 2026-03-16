#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cctype>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int main()
{
	map<char,int> table;
	table['I']=1;
	table['V']=5;
	table['X']=10;
	table['L']=50;
	table['C']=100;
	table['D']=500;
	table['M']=1000;
	for(string s;cin>>s;){
		int res=0;
		rep(i,s.size()){
			if(i==s.size()-1)
				res+=table[s[i]];
			else if(table[s[i]]>=table[s[i+1]])
				res+=table[s[i]];
			else
				res-=table[s[i]];
		}
		cout<<res<<endl;
	}
	
	return 0;
}