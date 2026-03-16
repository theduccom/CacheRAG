#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=4005,M=1000000;
signed main(void){
	int n;
	bool flag;
	int id[N],sum[N];
	map<int,int> Map; 
	ios::sync_with_stdio(false);
	while(cin>>n&&n){
		Map.clear();
		flag=true;
		memset(sum,0,sizeof(sum));
		for(int i=1,x,y;i<=n;i++){
			cin>>id[i]>>x>>y;
			if(!Map[id[i]])
				Map[id[i]]=i;
			sum[Map[id[i]]]+=x*y;
		}
		for(int i=1;i<=n;i++)
			if(sum[i]>=M){
				flag=false;
				cout<<id[i]<<endl;
			}
		if(flag)
			cout<<"NA"<<endl;
	}
}