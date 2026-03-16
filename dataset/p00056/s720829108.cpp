#include <iostream>
using namespace std;

int main()
{

	bool is_prime[50001];
	
	is_prime[0]=is_prime[1]=false;
	for(int i=2; i<50001; i++){
		is_prime[i]=true;
	}
	
	for(int i=2; i*i<50001; i++){
		if(is_prime[i]){
			for(int j=i*i; j<50001; j+=i){
				is_prime[j]=false;
			}
		}
	}
	
		
	while(true){
		int n;
		cin>>n;
		
		if(n==0)
break;
		int output=0;

		for(int i=0; i<=n/2; i++){
			if(is_prime[i] && is_prime[n-i])
			{
					output++;
			}
		}
		cout<<output<<endl;
	}
}
		