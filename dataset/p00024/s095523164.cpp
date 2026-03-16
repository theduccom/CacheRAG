#include<iostream>
#include<cmath>
using namespace std;

int main(){

	double v;

	while(cin >> v){
		for(int i=1;; i++){
			if(v <= 9.8 * sqrt((5 * i -5) / 4.9)){
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}