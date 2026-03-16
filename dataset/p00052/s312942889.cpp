#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int n;
	while(cin>>n,n){
		int c=0;
		unsigned long long k=1;
		for(int i=1;i<=n;++i){
			k*=i;
			while(k%10==0){
				c++;
				k/=10;
			}
			k%=10000000000;
		}
		cout<<c<<endl;
	}
}