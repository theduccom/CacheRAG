#include <iostream>
using namespace std;

double speed(int i){
	double height = i * 5 - 5;
	return 2 * 9.8 * height;
}
int main(){
	double vl;
	while(cin >> vl){
		int i = 0;
		while(speed(i) < vl * vl) i++;
		cout << i << endl;
	}
	return 0;
}