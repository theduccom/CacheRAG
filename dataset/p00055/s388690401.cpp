#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a;
	while(cin >> a){
		cout << setprecision(20) << a*211/27 << endl;
	}
}