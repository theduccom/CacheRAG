#include <iostream>

using namespace std;

int main()
{
	int w;
	while (cin >> w) {
		bool first_output = true;
		for (int weight = 1; w>0; w>>=1, weight<<=1) {
			if ((w&1)==1) {
				if (!first_output) cout << " ";
				cout << weight;
				first_output = false;
			}
		}
		cout << endl;
	}
	
	return 0;
}