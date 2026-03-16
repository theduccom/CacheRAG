#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;

map<char,int> R;

int main(){
	R['I']=1;
	R['V']=5;
	R['X']=10;
	R['L']=50;
	R['C']=100;
	R['D']=500;
	R['M']=1000;
	string s;
	while(cin >> s){
		if(cin.eof()) break;
		int res=0;
		rep(i,s.size()){
			int cur=R[s[i]];
			if(i+1<s.size()){
				int next=R[s[i+1]];
				if(cur<next)
					res-=cur;
				else
					res+=cur;
			}else
				res+=cur;
		}
		cout << res << endl;
	}
	return 0;
}