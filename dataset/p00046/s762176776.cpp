#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<float> h;
	float tmp,max,min;

	while (cin >> tmp) h.push_back(tmp);

	max = min = h[0];
	for (vector<float>::iterator it = h.begin() + 1; it != h.end(); ++it) {
		if (*it > max) max = *it;
		if (*it < min) min = *it;
	}

	cout << max - min << endl;
	
	return 0;
}