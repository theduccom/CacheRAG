#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;

string key[3]={"the","this","that"};

string s,s2;

int main(){
	while(getline(cin,s)){
		bool flg=false;
		REP(c,'z'-'a'+1){
			s2=s;
			REP(i,s2.length()){
				if (s2[i]!=' ' && s2[i]!='.'){
					if ((int)s2[i]+c>'z'){
						s2[i]+='a'-'z'-1;
					}
					s2[i]+=c;
				}
			}
			REP(i,3){
				if (s2.find(key[i])!=string::npos){
					cout<<s2<<endl;
					flg=true;
					break;
				}
			}
			if (flg) break;
		}
	}
	return 0;
}