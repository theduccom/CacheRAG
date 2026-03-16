#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	string s;
	getline(cin, s);
	rep(i, s.size()){
		if('A' <= s[i] && s[i] <= 'Z') s[i] += 32;
		else if('a' <= s[i] && s[i] <= 'z') s[i] -= 32;
	}
	cout << s << endl;
	
	return 0;
}