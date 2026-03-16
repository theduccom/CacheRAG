#include<iostream>
#include<string>
using namespace std;
int prime[200];
bool ans[1000001];
int main(){
	int count=0;
	for(int i=2;i<1000;i++){
		bool t=true;
		for(int j=0;j<count;j++){
			if(i%prime[j]==0)
				t=false;
		}
		if(t==true){
			prime[count]=i;
			count++;
		}
	}
	int n,x,m;
	while(true){
	cin>>n>>x;
	if(n==0&&x==0)
		break;
	ans[0]=true;
	for(int i=1;i<x;i++)
		ans[i]=false;
	for(int u=0;u<n;u++){
		cin>>m;
		for(int i=0;i<m;i++){
			bool t=false;
			for(int j=i;j<=x;j+=m){
				if(ans[j]==true)
					t=true;
				if(t==true)
					ans[j]=true;
			}
		}
	}
	int best=x;
	while(true){
		if(ans[best]==true){
			bool t=true;
			for(int i=0;i<count;i++){
				if(best%prime[i]==0)
					t=false;
			}
			if(t==true)
				break;
		}
		best--;
		if(best==1)
			break;
	}
	if(best==1)
		cout<<"NA"<<endl;
	else
		cout<<best<<endl;
	}
	return 0;
}