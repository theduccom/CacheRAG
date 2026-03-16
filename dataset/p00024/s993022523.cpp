#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	double v;
	while(cin >> v){

		double t = v / 9.8;	// 2.59...
		double y = t * t * 4.9; // 

		/*// y = n * 5 - 5
		int n = 0;
		if(int(y + 5) % 5 == 0) n = (y + 5) / 5;
		else n = (y + 5) / 5 + 1;
		*/

		int n = 1;
		while(n * 5 - 5 < y){
			++n;
		}
		cout << n << endl;
	}

	return 0;
}