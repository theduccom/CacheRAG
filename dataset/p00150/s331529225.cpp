#include<cmath>
#include<iostream>
#define N 10002
using namespace std;
int eratos[N]; // [N]=0 -> N is prime
void createPrimeTable(){
	for(int i = 2; i < N; ++i){
		if( eratos[i] == 0 ){
			for(int j = 2; i * j < N; ++j){
				eratos[ i * j ] = 1;
			}
		}
	}
}
int main()
{
	createPrimeTable();
	while(true){
		int n;
		int p = 0;
		int q = 0;
		cin >> n;
		if( n == 0 ) break;
		for(int i = 3; i <= n - 2; ++i){
			if( eratos[ i ] == 0 && eratos[ i + 2 ] == 0 ){
				p = i;
				q = i + 2;
			}
		}
		cout << p << ' ' << q << '\n';
	}
	return 0;
}