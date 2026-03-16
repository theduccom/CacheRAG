#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(islower(s[i])) s[i]-=32;
	}
	/*for(int i=0;i<s.size();i++) cout<<s[i];
	cout<<"\n";*/
	cout<<s<<endl;
	return 0;
}