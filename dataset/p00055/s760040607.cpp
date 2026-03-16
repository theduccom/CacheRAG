#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const double EPS = 1e-9;

int main(){
	double n;

	while(cin >> n){
		double sum = n;
		for(int i = 2; i <= 10; i++){
			if(i%2 == 0){
				n*=2;
			}else{
				n/=3;
			}
			sum += n;
		}
		cout.flags(ios::fixed);
		cout.precision(8);

		cout << sum << endl;
	}
	
    return 0;
}