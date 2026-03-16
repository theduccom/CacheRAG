#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
	char ho[8]={'H','o','s','h','i','n','o'};
	int n;
	string s;
	cin>>n;cin.ignore();
	while(n--){
		getline(cin,s);
		int a=s.length();
		rep(i,a-6){
			if(s[i]=='H'&&s[i+1]=='o'&&s[i+2]=='s'&&s[i+3]=='h'&&s[i+4]=='i'&&s[i+5]=='n'&&s[i+6]=='o'){
				s[i+6]='a';i+=6;
			}
		}
		cout<<s<<endl;
	}
}