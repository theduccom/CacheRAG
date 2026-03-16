#include<iostream>
#include<cstring>
using namespace std;

bool prime[50001];

void seive(int s){
	memset(prime,true,sizeof(prime));
	prime[0]=prime[1]=false;
	for(int i=2;i<=s;i++){
		if(prime[i]==true){
			for(int j=i*2;j<=s;j+=i)prime[j]=false;
		}
	}
}

int main(void){
	seive(50000);
	while(1){
		int n,ans=0;
		scanf("%d",&n);
		if(n==0)break;
		if(n<=3)printf("0\n");
		else{
			for(int i=2;i<=n/2;i++){
				if(prime[i]==true && prime[n-i]==true)ans++;
			}
			printf("%d\n",ans);
		}
	}
    return 0;
}