#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	double V;
	while(cin>>V){
		for(int i = 1 ; ; i++){
			double y = 5 * i - 5;
			double t = sqrt(y/4.9);
			double v = 9.8*t;
			if(v>=V-1e-9){
				cout << i << endl;
				break;
			}
		}

		
	}
}