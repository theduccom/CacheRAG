#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int n,m;

	while(cin>>n>>m,n){
		int t[n];
		for(int i=0;i<n;i++){
			cin>>t[i];
		}
		sort(t,t+n);
		reverse(t,t+n);

		int ans = 0;
		for(int i=0;i<n;i+=m){
			int sum = 0;
			for(int j=i;j<n && j<i+m;j++){
				sum += t[j];
			}
			if(i+m <= n) sum -= t[i+m-1];
			ans += sum;
		}
		cout<<ans<<endl;
	}

	return 0;
}