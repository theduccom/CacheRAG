#include<iostream>
#include<vector>
using namespace std ;

int ans[50010] = {};
int prime[50010] = {};
vector<int> VC;

void calc(){
	
	prime[0] = prime[1] = 1;
	for( int i=2 ; i<=50000 ; i++ ){
		if( !prime[i] ){
			VC.push_back(i) ;
			for( int j=2 ; i*j<=50000 ; j++ ){
				prime[i*j] = 1;
			}
		}
	}
	
	for( int i=4 ; i<=50000 ; i++ ){
		for( int j=0 ; VC[j] <= i/2 ; j++ ){
			if( !prime[i-VC[j]] ) ans[i]++;
		}
	}
	
}

int main(){
	
	calc();
	
	int n;
	while( cin >> n , n ){
		cout << ans[n] << endl ;
	}
	
	return 0;
}