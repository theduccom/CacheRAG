#include <iostream>
using namespace std;

int main(){
	bool first = true;
	double input, high = 0, low = 0;

	while ( cin >> input ){
		if ( first ){
			high = low = input;
			first = false;
		}else{
			if ( input > high ){
				high = input;
			}else if ( input < low ){
				low = input;
			}
		}
	}

	input = high - low;
	cout << input << endl;

	return 0;
}