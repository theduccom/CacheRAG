#include <bits/stdc++.h>

using namespace std;

string s;

int main(){
	while(getline(cin,s)){
		for (int i=0;i<s.length();i++){
			if (s[i]!=' ' && s[i]!='.'){
				s[i]+='A'-'a';
			}
		}
		cout<<s<<endl;
	}
	return 0;
}