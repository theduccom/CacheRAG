#include<iostream>
#include<cstring>

int sumPrime[10000];

void makePrime(){
	const int max=1000000;
	bool sieve[max];
	int k=0;
	memset(sieve,true,sizeof(sieve));
	for(int i=0;i<max&&k<10000;++i){
		if(sieve[i]){
			sumPrime[k]=i+2+(k>0?sumPrime[k-1]:0);
			++k;
			for(int j=i*2+2;j<max;j+=i+2){
				sieve[j]=false;
			}
		}
	}
}

int main(){
	int n;
	makePrime();
	while(1){
		std::cin>>n;
		if(n==0)break;
		std::cout<<sumPrime[n-1]<<std::endl;
	}
	return 0;
}