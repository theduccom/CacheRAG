#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	string str;
	getline(cin,str);
	rep(i,0,str.size()){
		if('a'<=str[i]&&str[i]<='z'){
			str[i]+='A'-'a';
		}
	}
	cout<<str<<endl;
}