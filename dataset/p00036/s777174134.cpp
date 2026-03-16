#include <iostream>
#include <string>
using namespace std;

int main(){
	int k, l, a[11][11] = {};
	string in[8], mm;
	while (true)
	{
		for (int i=0;i<8;i++){
			cin >> in[i];
		}
		if (cin.eof()) { break; }

		for (k = 0; k<8; k++) {
			for (l = 0; l<8; l++) {
				mm = in[k][l];
				a[k][l] = stoi(mm);
			}
		}
		for (k = 0; k<8; k++) {
			int z = false;
			for (l = 0; l<8; l++) {
				if(1 ==a[k][l]){
					z = true;
					break;
				}
			}
			if (z) { break; }
		}
		if (a[k + 3][l] == 1) { cout << "B" << endl; }
		else if (a[k][l+3] == 1) { cout << "C" << endl; }
		else if (a[k+1][l + 2] == 1) { cout << "E" << endl; }
		else if (a[k+2][l + 1] == 1) { cout << "F" << endl; }
		else if (a[k+1][l + 1] == 1) { cout << "A" << endl; }
		else if (a[k+2][l - 1] == 1) { cout << "D" << endl; }
		else { cout << "G" << endl; }
	}
	return 0;
}