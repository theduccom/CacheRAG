#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	
	int b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	if((b1 && b2 && !b3) || (!b1 && !b2 && b3)){
		cout << "Open" << endl;
	}
	else {
		cout << "Close" << endl;
	}

	return 0;
}