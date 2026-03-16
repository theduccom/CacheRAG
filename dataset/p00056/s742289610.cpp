/*----------------------
h28i13 織海斗
------------------------*/
#include <iostream>
using namespace std;

int main(){
	bool is_prime[1000000];
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<1000000;i++){
		is_prime[i]=true;
	}
	for(int i=2;i*i<1000000;i++){
		if(is_prime[i]){
			for(int j=i*i;j<1000000;j+=i){
				is_prime[j]=false;
			}
		}
	}

	int n[10000],num[10000];
	int j=0;
	for(int i=0;i<10000;i++){
		num[i]=0;
	}
	while(true){
		cin>>n[j];
		if(n[j]==0)
			break;
		for(int i=2;i<n[j]/2+1;i++){
			if(is_prime[i]==true){
				if(is_prime[n[j]-i]==true){
					num[j]+=1;
				}
			}
		}
		j++;
	}
	for(int i=0;i<j;i++)
		cout<<num[i]<<endl;
	return 0;
}
