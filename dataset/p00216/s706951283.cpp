#include <iostream>
using namespace std;

int main(){
	const int n = 4280;
	int w;
	while( cin >> w , ~w ){
		int sum = 1150;
		if( w <= 10 ){
		}else if( w <= 20 ){
			sum += (w-10)*125;
		}else if( w <= 30 ){
			sum += 1250 + (w-20)*140;
		}else{
			sum += 1250 + 1400 + (w-30)*160;
		}
		cout << n - sum << endl;
	}
}