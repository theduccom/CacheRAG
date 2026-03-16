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
void search(){
	queue<int> que;
	int m,l;
	que.push(0);
	while(!que.empty()){
		m=que.front();
		que.pop();
		for(int i=0;i<n;i++){
			l = m+menu[i];
			if(l<=money && !order[l]){
				order[l]=true;			
				que.push(l);
			}
		}
	}
}
int main(){
	init();
	while(cin>>n>>money,n|money){
		for(int i=0;i<n;i++)cin>>menu[i];
		fill(order,order+(MAX+1),false);
		search();
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