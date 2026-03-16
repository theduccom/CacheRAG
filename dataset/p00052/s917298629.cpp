#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	while( cin >> n ){
		if(!n) break;
		
		int cnt2 = 0, cnt5 = 0;
		for( int i = 1; i <= n; i++ ){
			bool flag = true; int t = i;
			while( flag ){
				flag = false;
				if( t % 2 == 0 ){ flag = true; cnt2++; t /= 2; }
				if( t % 5 == 0 ){ flag = true; cnt5++; t /= 5; }
			}
		}
		cout << min(cnt2, cnt5) << endl;
	}
	return 0;
}