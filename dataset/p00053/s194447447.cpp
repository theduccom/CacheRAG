#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	bool f[105000];
	int n;
	long long int sum[105000];
	memset(f,false,sizeof(f));
	sum[0]=0;
	for(int i=2;i*i<=105000;i++){
		if(f[i])continue;
		for(int j=i*i;j<105000;j+=i)f[j]=true;
	}
	int k=1;
	for(int j=2;j<=105000;j++){
		if(!f[j]){
			sum[k]=sum[k-1]+j;
			k++;
		}
	}
	while(1){
		cin>>n;
		if(n==0)break;
		cout<<sum[n]<<endl;
	}
	return 0;
}