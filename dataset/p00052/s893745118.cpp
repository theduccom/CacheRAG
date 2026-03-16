#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{	
	int ans;
	int n;
	int omosa=5;
	while(cin>>n,n!=0){
		ans=0;
		omosa=5;
		while(1){
			if(n/omosa==0)break;
			ans+=n/omosa;
			omosa*=5;
		}
		cout<<ans<<endl;
	}
	return 0;
}