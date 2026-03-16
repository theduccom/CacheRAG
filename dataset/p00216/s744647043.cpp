
#include<iostream>
#define rep(i,n) for(i = 0;i < n;i++)
using namespace std;

int w;

int main(){
	int i;
	int sum;

	while( cin >> w ){
		sum = 1150;
		if( w == -1 )
			break;
		w -= 10;
		if( w > 0 ){
			sum += 125*w;
			w -= 10;
		}
		if( w > 0 ){
			sum += 15*w;
			w -= 10;
		}
		if( w > 0 ){
			sum += 20*w;
		}
		cout << 4280-sum << endl;
	}
	return 0;
}