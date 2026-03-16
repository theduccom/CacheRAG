#include <iostream>
using namespace std;

int main()
{	
	int w;

	while (cin >> w) {
		int i = 0;
		bool f = 0;
		while ((1 << i) <= w) {
			if ((1 << i) & w) {
				if (f)
					cout << " ";
				else
					f = 1;

				cout << (1 << i);
			}

			i++;
		}

		cout << endl;
	}

	return 0;
}

