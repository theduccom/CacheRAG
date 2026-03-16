#include <iostream>
using namespace std;
int main(){
	bool is_prime[1000000];
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<1000000;i++){
		is_prime[i]=true;
	}
	for(int i=0;i*i<1000000;i++){
		if(is_prime[i]){
			for(int j=i*i;j<1000000;j+=i){
				is_prime[j]=false;
			}
		}
	}
	
	while(1){
	int a=0;
	cin>>a;
	int cun=0;
	if(a==0){
		break;
	}
	int j=0;
	for(int i=0;i<a;i++){
	if(is_prime[j]){
		cun=cun+j;
		j++;
	}
	else{
		i--;
		j++;
	}
	}
	cout<<cun<<endl;
	}
	return 0;
}