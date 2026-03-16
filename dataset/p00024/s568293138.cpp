#include <iostream>
#include <iomanip>
#include <math.h>
#include <utility>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
	double x;
	while(cin>>x){
		double h = 4.9*x*x/9.8/9.8;
		int y=0;
		while(5*y-5<h) y++;
		cout << y << endl;
	}
	return 0;
}