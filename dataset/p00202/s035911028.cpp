#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
#define MAX 1000000

bool prime[MAX];
bool order[MAX+1];
int menu[30];
int n,money;

void init(){
	fill(prime,prime+MAX,true);
	prime[0]=prime[1]=false;
	for(int i=2;i<MAX;i++){
		if(prime[i]){
			for(int j=2;j*i<MAX;j++)
				prime[j*i]=false;
		}
	}
}
int main(){
	init();
	while(cin>>n>>money,n|money){
		for(int i=0;i<n;i++)cin>>menu[i];
		fill(order,order+(MAX+1),false);
		order[0]=true;
		for(int i=0;i<=money;i++){
			for(int j=0;j<n;j++){
				if(order[i] && i+menu[j]<=money)
					order[i+menu[j]] = true;
			}
		}
			
		int ans=-1;
		for(int i=money;i>1;i--){
			if(prime[i] && order[i]){
				ans=i;
				break;
			}
		}
		if(ans!=-1)cout<<ans<<endl;
		else cout<<"NA"<<endl;
	}
}