#include<iostream>
#include<algorithm>
using namespace std;

int sn=0;
int s[1000001];

int n,x;
int v[30];
bool p[1000001],dp[1000001];

int main(){
	p[0]=false;p[1]=false;
	for(int i=2;i<=1000000;i++){
		p[i]=true;
		for(int j=0;j<sn;j++){
			if(i%s[j] == 0){
				p[i]=false;
				break;
			}
			if(i<=s[j]*s[j]) break;
		}
		if(p[i]){
			s[sn]=i;
			sn++;
		}
	}

	while(cin>>n>>x,x!=0){
		for(int i=0;i<n;i++) cin>>v[i];
		fill(dp,dp+x,false);dp[0]=true;
		int ans=0;
		for(int i=0;i<=x;i++){
			if(dp[i]){
				for(int j=0;j<n;j++){
					if(i+v[j]<=x) dp[i+v[j]]=true;
				}
				if(p[i]) ans=i;
			}
		}
		if(ans) cout<<ans<<endl;
		else cout<<"NA"<<endl;
	}

	return 0;
}