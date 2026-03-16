#include <iostream>
using namespace std;

int main(){
	int value;
	double quantity;
	char c;
	int total = 0;
	double count = 0;
	double sales = 0;
	while(cin >> value >> c >> quantity){
		total += value * quantity;
		sales += quantity;
		count++;
	}
	if(count != 0){
		cout << total << endl;
		cout << (int)((sales / count) + 0.5) << endl;
	}else {
		cout << 0 << endl;
		cout << 0 << endl;
	}
	return 0;
}