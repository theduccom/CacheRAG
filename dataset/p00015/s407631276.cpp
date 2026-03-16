#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int main(){
	int N;
	cin>>N;
	REP(i,N){
		string s1,s2;
		string comp;
		cin>>s1>>s2;
		reverse(s1.begin(),s1.end());
		reverse(s2.begin(),s2.end());
		int n1=s1.size();
		int n2=s2.size();
		int ma=max(n1,n2);
		FOR(j,n1,ma){
			s1+='0';
		}
		FOR(j,n2,ma){
			s2+='0';
		}
		int c=0;
		REP(j,ma){
			int k=c+s1[j]+s2[j]-'0';
			if (k<='9'){
				comp+=k;
				c=0;
			}
			else{
				comp+=k-10;
				c=1;
			}
		}
		if (c==1) comp+='1';
		reverse(comp.begin(),comp.end());
		if (comp.size()>80) cout<<"overflow"<<endl;
		else cout<<comp<<endl;
	}
	return 0;
}