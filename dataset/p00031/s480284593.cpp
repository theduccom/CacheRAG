#include<iostream>
using namespace std;

#define MAX 10	// ªºÌ

int main()
{
	int n;
	int flag;
	int i;

	while (cin >> n) {
		flag = 0;
		for (i = 0; i < MAX; i++) {
			if ( (n & 1<<i) == 0) continue;
			if (flag) cout << " ";
			else flag = 1;
			cout << (1<<i);
		}
		cout << endl;
	}

	return 0;
}