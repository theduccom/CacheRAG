#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
#define MAX 50010
using namespace std;
int main(){
	int sum,k=0;
	vector<int> pri(MAX);
	vector<int> pre(MAX);
	for(int i=0;i<MAX;i++)
	pri[i]=1;
	pri[0]=0;
	pri[1]=0;
	for(int i=0;i*i<MAX;i++){
		if(pri[i]){
			for(int j=i*2;j<MAX;j+=i){
				pri[j]=0;
			}
		}
	}
	for(int i=0;i<MAX;i++)
	if(pri[i]){
	pre[k++]=i;
	}
	int n;
	while(cin>>n,n){
		sum=0;
		for(int i=0;pre[i]<=n/2;i++){
			if(pri[n-pre[i]])
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}