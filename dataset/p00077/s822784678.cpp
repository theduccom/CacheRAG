#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<typeinfo>
using namespace std;

int main(){
	string ss;
	while(cin>>ss){
		string ans;
		for(int i=0;i<ss.size();i++){
			if(ss[i]=='@'){
				i++;
				for(int j=0;j<(ss[i]-'0');j++){
					ans+=ss[i+1];
				}
				i++;
			}else{
				ans+=ss[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}