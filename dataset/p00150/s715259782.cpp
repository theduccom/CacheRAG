#include<iostream>
#include<vector>
#define MAX 1000000
using namespace std;
int main(){
	int k=0;
	vector<int> prid(MAX);
	vector<int> pre(MAX);
	for(int i=0;i<MAX;i++)
		prid[i]=1;
	prid[0]=0;
	prid[1]=0;
	for(int i=0;i*i<MAX;i++)
		if(prid[i]){
			for(int j=i*2;j<MAX;j+=i)
				prid[j]=0;
		}
	for(int i=0;i<MAX;i++)
		if(prid[i])
			pre[k++]=i;
	int n,v;
	while(cin>>n,n){
		k=0;
		while(pre[k++]<=n)
		v=k-1;
		for(int j=v;j>=0;j--)
			if(pre[j]-pre[j-1]==2){
				cout<<pre[j-1]<<" "<<pre[j]<<endl;
			break;
			
			
		}
		
	}
	
	return 0;
}