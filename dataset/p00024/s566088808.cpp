#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	double crackSpeed;
	
	crackSpeed = -1;
	cin >> crackSpeed;
	
	while (crackSpeed >= 0) {
		
		double crackTime = crackSpeed / 9.8;
		double crackDist = 4.9 * crackTime * crackTime;
		
		int numFloor = 1;
		
		while ((double)(5 * numFloor - 5) < crackDist) numFloor++;
		
		cout << numFloor << endl;
		
		crackSpeed = -1;
		cin >> crackSpeed;
	}
	
	return 0;
}