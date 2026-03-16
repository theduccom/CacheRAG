#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double x;
	while(cin >> x){
		cout << showpoint << setprecision(10)<< x * 211 / 27 << endl;
	} 
	return 0;
}