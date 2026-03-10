#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// QQ(0000)
int main()
{
	for (int i = 1; i < 10; ++i) {
		for (int j = 1; j < 10; ++j) {
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}

	return 0;
}