#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for(int i=0;i<n;++i)

using namespace std;

int a[1010];

int main(){
	int n,m;
	while(cin >> n >> m,n){
		rep(i,n) cin >> a[i];
		int sum=0;
		rep(i,n) sum+=a[i];
		sort(a,a+n);
		for(int i=n-m;i>=0;i-=m) sum-=a[i];
		cout << sum << endl;
	}
	return 0;
}