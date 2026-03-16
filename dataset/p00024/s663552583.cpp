#include "bits/stdc++.h"
using namespace std;


int main(){
	double a;
	while(cin >> a){
		double i = 1;
		while(1){
			double h =((a*a)/19.6);
			double y = (5*i-5);
			if(y >= h)break;
			i++;
		}
		cout << i<<endl;

	}
		return 0;

}