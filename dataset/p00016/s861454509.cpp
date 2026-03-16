#include <iostream>
#include <stack>
#include <cmath>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
	double x = 0 , y = 0, arg = 90; 
	int a,b;
	while((cin>>a).ignore()>>b){
		x += a * cos( arg / 180 * M_PI);
		y += a * sin( arg / 180 * M_PI);
		arg -= b;
	}
	cout << (x>=0?floor(x):ceil(x)) << endl << (y>=0?floor(y):ceil(y)) << endl;
}