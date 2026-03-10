#include <iostream>
using namespace std;

int main(){

	for(int y = 0; y < 9; ++y){
		for(int x = 0; x < 9; ++x){
			cout << y+1 << 'x' << x+1 << '=' << (x+1) * (y+1) << endl;
		}
	}
	return 0;
}