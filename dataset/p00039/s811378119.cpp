#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
char ta[]={'I','V','X','L','C','D','M'};
int t[]={1,5,10,50,100,500,1000};
int main(){
	string n;
	while(cin>>n){
	bool used[5000]={0};
	int ans=0,a=0,b=0;
		
		for(int i=1;i<n.size();i++){
			for(int j=0;j<7;j++)if(n[i]==ta[j])a=t[j];
			for(int j=0;j<7;j++)if(n[i-1]==ta[j])b=t[j];
			if(b<a){
			used[i]=used[i-1]=1;
			ans+=a-b;
			}
		}
			for(int i=0;i<n.size();i++){
			for(int j=0;j<7;j++)if(n[i]==ta[j])a=t[j];
			if(used[i]==0)ans+=a;
			}
		cout<<ans<<endl;
	}
	return 0;
}