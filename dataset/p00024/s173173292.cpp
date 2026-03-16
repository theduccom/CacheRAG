#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

int main() {
	long double v;
	while(cin >> v){
		double y = 4.9 * pow(v / 9.8, 2.0);
		for(int i = 1; ; ++i){
			if(5 * i - 5 >= y){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}