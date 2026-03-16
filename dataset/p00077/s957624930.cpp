#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
			if(s[i]=='@'){
				int n=s[++i]-'0';
				i++;
				for(int j=0;j<n;j++)cout<<s[i];
			}else cout<<s[i];
		}
		cout<<endl;
	}
	return 0;
}