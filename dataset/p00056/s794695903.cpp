#include<iostream>

const int MAX = 50001;
using namespace std;

int main(void){
	int i = 3;
	int n = 0;
	int ps[MAX];
	
	for(int i = 0; i < MAX; i++){
		ps[i] = 1;
	}
	for(int i = 2; i < MAX; i++){
		if( ps[i] ){
			for(int j = 2; i * j < MAX; j++){
				ps[i * j] = 0;
			}
		}
	}

	while( 1 ){
		int n;
		int cnt = 0;
		
		cin >> n;
		if( n == 0 ) break;

		if( n % 2 == 1 ){
			if( ps[n - 2] ) cnt++;
		}else{
			for(int i = 2; i <= n / 2; i++){
				if( ps[i] && ps[n - i] ) cnt++;
			}
		}

		cout << cnt << endl;
	}
	return 0;
}