#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n,m,sum,x;
	while(cin>>n>>m,n||m){
		sum=0;
		priority_queue<int> que;
		for(int i=0;i<n;i++){
		cin>>x;
			que.push(x);
		}
		for(int i=1;i<=n;i++){
			
			if((m+i)%m!=0){
			sum+=que.top();
			}
			que.pop();
		}
		cout<<sum<<endl;
	}
	return 0;
} 