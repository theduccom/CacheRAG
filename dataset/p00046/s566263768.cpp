#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double max = -1000000000000000;
	double min =  1000000000000000;
	double m;
	while(cin >> m){
		if(max<m) max=m;
		if(min>m) min=m;
	}
	cout << setprecision(20) << max-min << endl;
}