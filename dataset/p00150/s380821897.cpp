#include <iostream>
#define MAX 10001
int prime[MAX];

void make_prime()
{
	int i,j;
	for(i=2; i<MAX; i++)prime[i]=1;
	for(i=2; i*i<MAX; i++)
		for(j=i*2; j<MAX; j+=i)prime[j]=0;
}
int main()
{
	int n;
	make_prime();
	while(std::cin>>n,n){
		for(int i=n; i>2; i--)
			if( prime[i] && prime[i-2] ){
				printf("%d %d\n",i-2,i);
				break;
			}
	}
	return 0;
}