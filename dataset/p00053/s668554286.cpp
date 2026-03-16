#include<iostream>
#include<cstring>
using namespace std;

bool erats[1000001];

int main(){
	memset( erats, 0, sizeof(erats) );
	erats[0] = erats[1] = true;
	for( int i=2; i<500000; i++ ){
		for( int j=i+i; j<=1000000; j+=i ){
			erats[j] = true;
		}
	}
	int n;
	while( cin >> n, n>0 ){
		int ret=0, cnt=0;
		for( int i=2; cnt<n; i++ ){
			if( !erats[i] ){
				ret += i;
				cnt++;
			}
		}
		cout << ret << endl;
	}
	return 0;
}