#include<cstdio>
#include<algorithm>

int main(){
	const int N =104729+1;
	bool isPrime[N];
	std::fill(isPrime,isPrime+N,true);
	isPrime[0]=isPrime[1]=false;
	int i,j;
	for(i =2;i*i<=N;i++){
		if(isPrime[i])
			for(j=i*2;j<N;j+=i)
				isPrime[j]=false;
	}
	
	int n;
	int s;
	int count;
	while(scanf("%d",&n),n){
		i=3;s=2;count=1;
		while(count!=n){
			if(isPrime[i]){
				count++;
				s+=i;
			}
			i+=2;
		}
		printf("%d\n",s);
	}
}