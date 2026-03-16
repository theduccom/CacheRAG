#include<iostream>

using namespace std;

int main(void){
	long long int n;
	while(cin >> n,n){
		long long int ans=0;
		for(long long int i=5;i<=n;i*=5)
			ans+=n/i;
		cout << ans << endl;
	}
	return 0;
}	