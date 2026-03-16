#include <iostream>

using namespace std;

int main(void){
	double num;
	double min;
	double max;
	cin >> num;
	min = num;
	max = num;
	while(cin >> num){
		if(num>max) max = num;
		if(num<min) min = num;
	}
	cout << max - min << endl;
	return 0;
}