#include <iostream>
using namespace std;

const int MAX = 100001;
char p[MAX] = {0};

int main(){
	for(int i=2 ; i < MAX ; i++ ) p[i] = 1;
	for(int i=2 ; i*i < MAX ; i++ ){
		if( p[i] ){
			for(int j=i+i ; j < MAX ; j += i ){
				p[j] = 0;
			}
		}
	}
	
	int n;
	while( cin >> n , n ){
		int a, b;
		for(int i=2 ; i <= n ; i++ ){
			if( p[i-2] && p[i] ){
				a = i-2;
				b = i;
			}
		}
		cout << a << " " << b << endl;
	}
}