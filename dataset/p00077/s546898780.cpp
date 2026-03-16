#include <bits/stdc++.h>
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)
using namespace std;

string s;

int main(void){
	while(cin >> s){
		if(cin.eof()) break;
		string out="";
		int n=s.size();
		rep(i,n){
			if(s[i]=='@'){
				int m=s[i+1]-'0';
				rep(j,m) out+=s[i+2];
				i+=2;
			}else
				out+=s[i];
		}
		cout << out << endl;
	}
	return 0;
}