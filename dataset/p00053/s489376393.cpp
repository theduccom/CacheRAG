#include <iostream>
using namespace std;

int num[120000] = {};
int ans[10010] = {};

void prime(){
	num[0] = 1;
	num[1] = 1;
	
	for( int i=2 ; i*i<120000 ; i++ ){
		if( num[i] == 0 ){
			for( int j=2 ; i*j<120000 ; j++ ){
				num[i*j] = 1;
			}
		}
	}
	
	int cnt = 1;
	for(int i=2 ; i<120000 ; i++){
		if( !num[i] ){
			ans[cnt] = i + ans[cnt-1];
			cnt++;
		}
		if(cnt > 10000) break;
	}
}

int main(){
	
	prime();
	
	int n;
	while( cin >> n , n ){
		cout << ans[n] << endl;
	}
	
	return 0 ;
}