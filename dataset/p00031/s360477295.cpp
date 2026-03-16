#include <iostream>
using namespace std;
int main()
{
	int n;
	int A[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	while (cin >> n){
		int i = 0, k;
		while (n != 0){
			k = n;
			n = n / 2;
			if (1 == k % 2){
				cout << A[i];
				if (n != 0)
					cout << " ";
			}
			++i;
		}
		cout << "\n";
	}
	return 0;
}