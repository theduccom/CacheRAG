#include <iostream>
using namespace std;

int main(){
	while(true){
		int floor = 1;
		double vc;
		cin >> vc;
		if(cin.eof()) break;
		for(floor;vc*vc>19.6*(5*(double)floor-5);floor++) ;
		cout << floor << endl;
	}
	return 0;
}