#include<bits/stdc++.h>
using namespace std;
static const double g = 9.8;

double v, t, h;

int main(){
	while(cin >> v){
		t = v / g;
		h = 0.5 * g * t * t;
		//cout << t << " " << h << endl;
		int N = 0;
		while(1){
			if(5 * (N - 1) - 5 <= h && 5 * N - 5 > h) break;
			N++;
		}
		cout << N << endl;
	}
	return 0;
}