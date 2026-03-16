#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
	int a, b, ko = 0, ta = 0;
	char knm;
	long int sum=0;
	while(cin>>a){
		cin >> knm >> b;
		sum += a*b;
		ko++;
		ta += b;
	}
	double he;
	he = ta / ko;
	int ans = round(he+0.5);
	cout << sum << endl
		<< ans << endl;
	return 0;
}