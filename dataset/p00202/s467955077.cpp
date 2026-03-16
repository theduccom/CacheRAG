#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

bool prime[1000001];

int main(){
	int n,x;
	rep(i,1000002)prime[i]=true;
	prime[0]=prime[1]=false;
	loop(i,2,1010)for(int j=i*2;j<1000001;j+=i)prime[j]=false;
	while(cin>>n>>x,n||x){
		int dish[n];
		rep(i,n)cin>>dish[i];
		bool cost[x+10];
		rep(i,x+10)cost[i]=false;
		rep(i,n)if(dish[i]<x+1)cost[dish[i]]=true;
		cost[0]=true;
		rep(i,x+1){
			if(!cost[i])continue;
			rep(j,n){
				if(i+dish[j]>x)continue;
				cost[i+dish[j]]=true;
			}
		}
		bool check=true;
		for(int i=x;i>=0;i--){
			if(prime[i] && cost[i]){
				check=false;
				cout<<i<<endl;
				break;
			}
		}
		if(check)cout<<"NA"<<endl;
	}
	return 0;
}