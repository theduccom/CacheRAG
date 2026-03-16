#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;

vector<int> price;

int main(){
	int n,m;
	int ans;
	int i;
	while( cin >> n >> m )
	{
		if( n == 0 && m == 0 )
			break;
		ans = 0;
		price.resize( n );
		for( i = 0;i < n;i++ ){
			cin >> price[i];
			ans += price[i];
		}

		sort( price.begin(),price.end(),greater<int>() );

		for( i = 0;i < n;i++ ){
			if( i%m < m-1 )
				continue;
			ans -= price[i];
		}
		cout << ans << endl;

		price.clear();
	}
	return 0;
}