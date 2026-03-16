#include<iostream>
using namespace std;

int main(){
	double v;
	while(cin >> v){
		double t = v / 9.8;
		double y = 4.9 * t * t;
		int i=1;
		while(1){
			double h = 5 * i - 5;
			if(y <= h) break;
			i++;
		}
		cout << i << endl;
	}
	return 0;
}