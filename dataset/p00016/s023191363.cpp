#include <iostream>
#include <cmath>

using namespace std;

int main(){
	string x;
	int d, theta;
	int direction=0;
	pair<double,double> p;
	while(cin >> x){
		sscanf(x.c_str(),"%d,%d",&d,&theta);
		p.first += d*cos(direction/360.0*2*M_PI);
		p.second += d*sin(direction/360.0*2*M_PI);
		direction += theta;
	}
	cout << (int)p.second << endl;
	cout << (int)p.first << endl;
}