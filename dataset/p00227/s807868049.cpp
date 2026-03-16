#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int n,m,*b,ans;

int main(){
	while(true){
		cin >> n >> m;
		if(!n && !m)
			return 0;
		b = new int[n];
		ans = 0;
		for(int i=0; i<n; i++)
			cin >> b[i];
		sort(b,b+n,greater<int>());
		for(int i=1; i<=n; i++){
			if(i%m == 0)
				continue;
			ans += b[i-1];
		}
		cout << ans << endl;
	}
}