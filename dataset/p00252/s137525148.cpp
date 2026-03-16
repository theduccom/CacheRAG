#include <iostream>

using namespace std;

int main() {
	int b[3];
	for (int i = 0; i < 3; ++i) cin >> b[i];
	if ((b[0] & b[1]) || b[2]) cout << "Open" << endl;
	else cout << "Close" <<endl;
	
	return 0;
}
