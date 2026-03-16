#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3]={0};a[0]=1;
	string s;
	while(cin>>s){
		if(a[s[0]-'A']){
			a[s[0]-'A']=0;
			a[s[2]-'A']++;
		}
		else if(a[s[2]-'A']){
			a[s[2]-'A']=0;
			a[s[0]-'A']++;
		}
	}
	if(a[0])cout<<'A';
	if(a[1])cout<<'B';
	if(a[2])cout<<'C';
	cout<<endl;
}