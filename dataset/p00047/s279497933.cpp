#include <iostream>

using namespace std;

int main() {
	int cup[3] = {1, 0, 0};
	string str;
	int index1, index2;
	while (cin >> str) {
		index1 = str[0] - 'A';
		index2 = str[2] - 'A';
		swap(cup[index1], cup[index2]);
//		cout << cup[0] << " " << cup[1] << " " << cup[2] << endl;
	}
	for (int i = 0; i < 3; i++)
		if (cup[i] == 1)
			cout << (char)('A' + i) << endl;
	return 0;
}