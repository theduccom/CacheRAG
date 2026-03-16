#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int n;
	bool f[50010];
	memset(f,true,sizeof(f));
	f[1]=false;f[0]=false;
	for(int i=2;i<300;i++){
		if(f[i]){
			for(int j=i*i;j<50001;j+=i)f[j]=false;
		}
	}
	while(cin>>n,n){
		int ans=0;
		for(int i=2;i<=n/2;i++){
			if(f[i]&&f[n-i])ans++;
		}
		cout<<ans<<endl;
	}
}