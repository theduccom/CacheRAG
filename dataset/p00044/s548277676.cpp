#include <iostream>
using namespace std;
int main(void)
{
	int prime[50000];
	prime[0] = 2;
	prime[1] = 3;
	int ptr = 2;
	for(int num = 5; num <=50100; num++){
		bool f = false;
		for(int i=0; i<ptr; i++){
			if(prime[i]*prime[i]>num){
				break;
			}
			if(num%prime[i]==0){
				f = true;
				break;
			}
		}
		if(!f){
			prime[ptr++] = num;
		}
	}
	int n;
	while(cin>>n){
		int i=0;
		while(prime[i]<=n){
			i++;
		}
		if(prime[i-1]==n){
			printf("%d %d\n",prime[i-2],prime[i]);
		}else{
			printf("%d %d\n",prime[i-1],prime[i]);
		}
	}
	return 0;
}