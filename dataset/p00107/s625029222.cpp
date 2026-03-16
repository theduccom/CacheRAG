#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	double a, b, c, d;
	while(cin >> a >> b >> c, a){

		d = sqrt(pow(min(a, min(b, c)), 2) + pow(a + b + c - min(a, min(b,c)) - max(a, max(b, c)), 2));
	
		int n;
		cin >> n;
		while(n--){
			int r;
			cin >> r;
			if(d < 2 * r)cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
}