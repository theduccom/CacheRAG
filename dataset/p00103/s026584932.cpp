#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n,ans;
	int out;
	bool runner[3];
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		ans=0;
		out=0;
		memset(runner,false,sizeof(runner));
		while(out<3){
			cin>>s;
			if(s=="OUT")out++;
			if(s=="HIT"){
				if(runner[2]){
					ans++;
					runner[2]=false;
				}
				if(runner[1]){
					runner[2]=true;
					runner[1]=false;
				}
				if(runner[0])runner[1]=true;
				runner[0]=true;
			}
			if(s=="HOMERUN"){
				ans++;
				for(int i=0;i<3;i++){
					if(runner[i]){
						ans++;
						runner[i]=false;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}