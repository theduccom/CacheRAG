#include <bits/stdc++.h>

using namespace std;


#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	string S;
	map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
	while (cin>>S){
		int ans=0;
		REP(i,S.length()-1){
			if (m[S[i]]>=m[S[i+1]]){
				ans+=m[S[i]];
			}else{
				ans-=m[S[i]];
			}
		}
		ans+=m[S[S.length()-1]];
		cout<<ans<<endl;
	}
	return 0;
}