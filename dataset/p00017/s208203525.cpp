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
	while(getline(cin, s)){
		rep(i, 26){
			rep(i, s.size()){
				if('a' <= s[i] && s[i] < 'z') s[i]++;
				else if(s[i] == 'z') s[i] = 'a';
			}
			
			if(s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos){
				cout << s << endl;
				break;
			}
		}
	}
	
	return 0;
}