#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int h[3], n;
	double R[3], r, min;
	while (cin >> h[0] >> h[1] >> h[2]) {
		if (h[0] == 0 && h[1] == 0 && h[2] == 0) { break; }
		R[0] = pow(h[0], 2) + pow(h[1], 2);
		R[1] = pow(h[0], 2) + pow(h[2], 2);
		R[2] = pow(h[1], 2) + pow(h[2], 2);
		min = R[0];
		if(min>R[1]){
			min = R[1];
		}
		if(min>R[2]){
			min = R[2];
		}
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> r;
			r = pow(2 * r, 2);
			if(r > min){
				cout << "OK" << endl;
			}
			else{
				cout << "NA" << endl;
			}
		}

	}
	return 0;
}