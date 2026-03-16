#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int n, num[11][11];
	while (1) {
		if (cin >> n, !n) break;
		
		for (int i=0; i<11; i++) for (int j=0; j<11; j++) num[i][j] = 0;
		
		for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> num[i][j];
		
		for (int i=0; i<10; i++)
			for (int j=0; j<10; j++) num[10][i] += num[j][i];
		
		for (int i=0; i<11; i++)
			for (int j=0; j<10; j++) num[i][10] += num[i][j];
		
		for (int i=0; i<11; i++) {
			for (int j=0; j<11; j++) {if ((i<n && j<n) || (i==10 && j<n) || (j==10 && i<n) || (j==10 && i==10)) {cout.width(5); cout << num[i][j];}}
			if ((i < n) || (i == 10))  cout << endl;
		}
	}
	return 0;
}