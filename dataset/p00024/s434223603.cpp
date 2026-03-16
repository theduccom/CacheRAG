#include <iostream>
using namespace std;

int main(){
	double v, t, y;
	int n, h[100000];
	
	for(int i=0 ; i<100000 ; i++){
		h[i] = i*5-5;
	}

	while(cin >> v){
		t = v / 9.8;
		y = t*t*4.9;
		n = (int)( (y+5.0)/5.0 );
		for(int i=0 ; i<100000 ; i++){
			if(h[i]>=y){
				n = i;
				break;
			}
		}
		cout << n << endl;
	}
}