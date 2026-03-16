#include<iostream>

using namespace std;

int main(void){
	bool prime[1000000];
	for(int i=0;i<=1000000;i++)
		prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i<=1000000;i++)
		if(prime[i])
			for(int j=2*i;j<=1000000;j+=i)
				prime[j]=false;
	int sum[10001]={0};
	int index=1;
	for(int i=0;i<=1000000;i++){
		if(index>10000)
			break;
		if(prime[i])
			sum[index]=sum[index-1]+i,index++;
	}
	int N;
	while(cin >> N,N)
		cout << sum[N]	<<endl;
	return 0;
}	