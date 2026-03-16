#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	while(cin>>n>>m&&n!=0&&m!=0){
		int sum=0;
		vector<int>data;
		for(int i=0;i<n;i++){
			int p;
			cin>>p;
			sum+=p;
			data.push_back(p);
		}
		sort(data.begin(),data.end(),greater<int>());
		for(int i=m-1;i<n;i+=m){
			sum-=data[i];
		}
		cout<<sum<<endl;
	}
}