#include <iostream>
using namespace std;

int x;

void func(int p2, int y, int first)
{
	int flag = 0;
	
	if (y == 0) {
		return;
	}
	
	if (y >= p2) {
		func(p2 / 2, y - p2, 0);
		flag = 1;
	}
	else {
		func(p2 / 2, y, first);
	}
	
	if (flag == 1) {
		cout << p2;
		if (first) {
			cout << endl;
		}
		else {
			cout << ' ';
		}
	}
}

int main()
{
	while (cin >> x) {
		func(512, x, 1);
	}
	
	return 0;
}