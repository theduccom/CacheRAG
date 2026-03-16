#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[4]={0},p=0,u=2,q=0;
	string s;
	while(cin>>s){
		p++;
		if(!q&&p>=10){u++;q++;}
		if(s.size()>u+1)a[2]++;
		else if(s[u]=='B')a[1]++;
		else if(s[u]=='O')a[3]++;
		else a[0]++;
	}
	for(int i=0;i<4;i++)cout<<a[i]<<endl;
}