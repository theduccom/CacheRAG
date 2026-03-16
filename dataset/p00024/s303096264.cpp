#include <iostream>
#include <cmath>
using namespace std;

const double EPS = 1.0e-6;
int main(){
	double v;
	while(cin>>v){
		double y = 4.9*v*v/9.8/9.8;
		int N = (y+5)/5 + 1;
		cout<<N<<endl;
	}
	return 0;
}