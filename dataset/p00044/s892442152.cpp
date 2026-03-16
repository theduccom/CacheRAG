#include<iostream>
#include<vector>
#define MAX 1000000
using namespace std;
int main(){
	vector<int> prid(MAX);
	vector<int> pri(MAX);
	int k=0;
	for(int i=0;i<MAX;i++)
		prid[i]=1;
	prid[0]=0;
	prid[1]=0;
	for(int i=0;i*i<MAX;i++){
		if(prid[i]){
			for(int j=i*2;j<MAX;j+=i)
				prid[j]=0;
		}
	}
	for(int i=0;i<MAX;i++)
	if(prid[i])
	pri[k++]=i;
	int x;
	while(cin>>x){
		for(int i=0;i<MAX;i++)
		if(pri[i]>x){
			if(pri[i-1]==x)
			cout<<pri[i-2]<<' ';
			else cout<<pri[i-1]<<' ';
			cout<<pri[i]<<endl;
			
			break;
		}
	}
	return 0;
}