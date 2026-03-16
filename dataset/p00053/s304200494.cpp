#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		if(n==0) break;
		int sum=0;
		bool prime[1000000];
		for(int i=2;i<=999999;i++){
			prime[i]=true;
		}
		for(int j=2;j<=999999;j++){
			if(prime[j]){
				for(int k=2*j;k<=999999;k+=j){
					prime[k]=false;
				}
			}
		}
		int m=0;
		for(int l=2;;l++){
			if(prime[l]){
				sum += l;
				m++;
			}
			if(m==n) break;
		}
		cout<<sum<<endl;
	}
	return 0;
}