#include <iostream>
#include <cfloat>
using namespace std;
int main(){
	double n,max = 0,min = DBL_MAX;
	while(cin >> n){
		if(n>max) max = n;
		else if(n<min) min = n;
	}
	cout << (double)(max - min) << endl;
	return 0;
}