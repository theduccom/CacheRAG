#include "bits/stdc++.h"
#include <iostream>
using namespace std;

int main(){
	string s;
	int ans=0;
	while(cin>>s){
		int c=s.length()/2;
		int cc=s.length();
		bool flag=true;
		for (int i = 0; i < c; ++i) {
			if(s[i]!=s[cc-1-i]){flag=false;break;}
		}
		if(flag)ans++;
	}
	cout<<ans<<endl;
}