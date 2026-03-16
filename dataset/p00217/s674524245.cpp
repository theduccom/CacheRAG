#include<iostream>
using namespace std;
int main(){
	int n, p, maxp, max, d1, d2;
	while( cin >> n && n ){
		max = -1;
		for ( int i = 0; i < n; i++ ){
			cin >> p >> d1 >> d2;
			if ( max < d1 + d2 ){
				maxp = p;
				max = d1 + d2;
			}
		}
		cout << maxp << " " << max << endl;
	}
	return 0;
}