#include <iostream>
#include <cstdio>
#include <limits>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	double h;
	double highest = 0;
	double lowest = numeric_limits<double>::max();
	while(cin >> h) {
		if(highest < h) highest = h;
		if(lowest > h) lowest = h;
	}
	cout << highest - lowest << endl;
	return 0;
}