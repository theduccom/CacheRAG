#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(){

	ll n;
	while(cin>>n&&n!=0){
		if(n<=4)
			cout<<0<<endl;
		else{
			int sum=0;
			for(ll i = 5; i <= n; i*=5){
				sum+=n/i;
			}
			cout<<sum<<endl;
		}
	}

	return 0;
}