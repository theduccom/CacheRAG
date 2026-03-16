#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double in, out;
	while(cin >> in){
		out = in * 211 / 27;
		cout << fixed << setprecision(8) << out << endl;
	}
	return 0;
}