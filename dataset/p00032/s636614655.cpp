#include <bits/stdc++.h>
using namespace std;

int main() {
	int len1, len2, cross, ctr1 = 0, ctr2 = 0;
	char a, b;
	vector<int> LEN1, LEN2, CROSS;

	while (cin >> len1 >> a >> len2 >> b >> cross) {
		LEN1.push_back(len1);
		LEN2.push_back(len2);
		CROSS.push_back(cross);
	}
	
	for (int i = 0; i < LEN1.size(); i++) {
		if (pow(CROSS[i], 2) == pow(LEN1[i], 2) + pow(LEN2[i], 2))ctr1++;
		else if (LEN1[i]==LEN2[i])ctr2++;
	}

	cout << ctr1 << endl << ctr2 << endl;
	return 0;
}