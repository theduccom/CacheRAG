#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double h, min = 1000000.0, max = 0.0;
	while(cin >> h){
		if( h > max ) max = h;
		else if( h < min ) min = h;
	}
	cout << fixed << setprecision(1) << max - min << endl;
}