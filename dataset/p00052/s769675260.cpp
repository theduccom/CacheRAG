#include <iostream>
using namespace std;

int a[30000] = {};

int kaijo(){
	for(int i = 1; i < 21000;i++){
		int l = i;
		a[i] = a[i - 1];
		while(true){
			if (l % 5 != 0) { break; }
			else if (l == 0) { break; }
			else {
				a[i]++;
				l /= 5;
			}
		}
	}
	return 0;
}

int main(){
	kaijo();
	int in;
	while (cin >> in){
		if (in == 0) { break; }
		cout << a[in] << endl;
	}
	return 0;
}