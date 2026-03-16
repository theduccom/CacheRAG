#include <iostream>

using namespace std;

int main() {
	
	int b[3];

	while (cin >> b[0] >> b[1] >> b[2]) {

		string check;
		check.clear();

		for (int i = 0; i < 3; i++) {

			if (b[i])
				check += '1';
			else
				check += '0';

		}

		if (check == "110" || check == "001")
			cout << "Open\n";

		else
			cout << "Close\n";

	}
	
	return 0;

}





