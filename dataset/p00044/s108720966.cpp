#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	long long int prime[50040];
	long long int ptr=0;
	unsigned long counter = 0;
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	
	for(int no =3 ; no <= 50040 ; no += 2){
		int flag=0;
		for(int i=1 ; prime[i] * prime[i] <= no ; i++){
			counter++;
			if(no % prime[i] == 0){
				flag = 1;
				break; 
			}
		}
		if(!flag)
			prime[ptr++] = no;
	}
	
	long long int n;
	while(cin>>n){
		int i;
		for(i=0;i<50040;i++){
			if(n<prime[i])break;
		}
		if(n==3){
			cout<<2;	
		}else{
			if(prime[i-1]==n)cout<<prime[i-2];
			else cout<<prime[i-1];
		}
		//printf("%d %d",prime[i-1],prime[i-2]);
		cout<<" "<<prime[i]<<endl;
	}
	
}