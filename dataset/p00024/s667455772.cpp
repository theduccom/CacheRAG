#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	float v,y;
	int N;
	
	while(cin>>v){
		y = v*v/19.6;
		N = ceil(y/5) + 1;
		cout << N << endl;
	}
	return 0;
}