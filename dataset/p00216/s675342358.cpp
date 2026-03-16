#include <iostream>
using namespace std;

int main(){
	int w;
	while(cin >> w && w != -1){
		int c = 0;
		c += 1150;
		c += 125 * max(0,min(w-10,10));
		c += 140 * max(0,min(w-20,10));
		c += 160 * max(0,w-30);
		cout << 4280 - c << endl;
	}
}