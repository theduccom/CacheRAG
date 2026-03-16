#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int rep=0; rep<n; rep++){
		double x[2],y[2],r[2];
		cin>>x[0]>>y[0]>>r[0]>>x[1]>>y[1]>>r[1];
		double d = sqrt((x[1]-x[0])*(x[1]-x[0]) +(y[1]-y[0])*(y[1]-y[0]));
		if(d>r[0]+r[1]) cout << 0 << endl;
		else if(d<r[0]-r[1]) cout << 2 << endl;
		else if(d<r[1]-r[0]) cout << -2 << endl;
		else cout << 1 << endl;
	}
	return 0;
}