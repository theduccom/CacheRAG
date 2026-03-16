#include<iostream>
#define MAX 10000

using namespace std;

int main(void){
	int i = 3;
	int n = 0;
	int ps[MAX] = {0,};
	
	ps[n++] = 2;
	while( n < MAX ){
		bool Skip = false;
		for(int j = 0; j < n; j++){
			if( i % ps[j] == 0 ){
				Skip = true;
				break;
			}
		}
		if( !Skip ) ps[n++] = i;
		i++;
	}

	while( 1 ){
		int n;
		int sum = 0;

		cin >> n;
		if( n == 0 ) break;

		for(int i = 0; i < n; i++){
			sum += ps[i];
		}

		cout << sum << endl;
	}
	return 0;
}