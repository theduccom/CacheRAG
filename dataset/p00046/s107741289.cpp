#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
const double INF = 1e18;

int main(){
	double h;
	double hmax=0, hmin=INF;
	while(cin >> h){
		hmax = max(hmax, h);
		hmin = min(hmin, h);
	}
	cout << fixed << setprecision(5);
	cout << hmax - hmin << endl;
	return 0;
}
