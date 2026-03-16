#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int p[10001], n;
	while( cin >> n, n ){
		memset( p, 0, sizeof(p) );
		for( int i=0; i<n; i++ ){
			int k, d1, d2;
			cin >> k >> d1 >> d2;
			p[k] = d1 + d2;
		}
		int mi=0;
		for( int i=1; i<=10000; i++ ){
			if( p[i] > p[mi] )
				mi = i;
		}
		cout << mi << " " << p[mi] << endl;
	}
	return 0;
}