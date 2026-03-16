#include<iostream>
using namespace std;
int main(){
	char s[128];
	while(cin>>s){
		for(int i=0;s[i];i++){
			if(s[i]=='@'){
				int n=s[++i]-'0';
				char c=s[++i];
				for(int j=0;j<n;j++)cout<<c;
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}