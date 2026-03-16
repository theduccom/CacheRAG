#include <iostream>
using namespace std;

int main()
{
	int w;

	while (cin >> w){
		for (int i = 1; i <= 512; i *= 2){
			if (w % (i * 2) != 0){
				cout << i;
				w -= i;
				if (w != 0){
					cout << " ";
				}
			}
			if (w == 0){
				cout << endl;
				break;
			}
		}
	}

	return (0);
}