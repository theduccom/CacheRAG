#include <iostream>
#include <string>
using namespace std;

int z;

int leap(int year){
	if(year % 400 == 0){
		cout << year << endl;
		z++;
	}
	else if (year % 4 == 0){
		if(year % 100 != 0){
			cout << year << endl;
			z++;
		}
	}
	return 0;
}

int main(){
	int a, b;
	z = -1;
	cin >> a >> b;
	if (a == 0 && b == 0) { return 0; }
	for (int i = a; i <= b; i++) {
		leap(i);
	}
	if (z == -1) {
		cout << "NA" << endl;
	}
	while(cin >> a >> b){
		z = -1;
		if (a == 0 && b == 0) { break; }
		cout << endl;
		for ( int i = a;i<=b;i++){
			leap(i);
		}
		if (z == -1){
			cout << "NA" << endl;
		}
	}
	return 0;
}