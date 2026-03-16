#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cfloat>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define INF INT_MAX
#define BINF DBL_MAX

int main(){
	double mx = 0;
	double mn = BINF;
	double h;
	while (cin >> h){
		if (h<mn) mn = h;
		if (h > mx) mx = h;
	}
	cout << mx - mn << endl;
	return 0;
}