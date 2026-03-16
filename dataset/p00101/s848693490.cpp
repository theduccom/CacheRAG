#include<bits/stdc++.h>
using namespace std;
const string a="Hoshino",b="Hoshina";
signed main(void){
	int n;scanf("%d",&n);getchar();
	for(int t=1;t<=n;t++){
		string s;
		getline(cin,s); 
		for(int i=0;i<s.length();i++){
			bool flag=true;
			for(int j=0;j<7;j++)
				if(s[i+j]!=a[j]){
					flag=false;
					break;
				}
			if(flag){
				s[i+6]='a';
				i+=6;
			}
		}
		cout<<s<<endl;
	}
}