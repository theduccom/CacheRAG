#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
	int n, i, j;
	vector< vector<int> > list(11, vector<int>(11));
	while (cin>>n, n) {
		for (i = 0; i <= n; i++) {
			list[i][n] = 0;
			list[n][i] = 0;
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cin>>list[i][j];
				list[i][n] += list[i][j];
				list[n][j] += list[i][j];
				list[n][n] += list[i][j];
			}
		}
		for (i = 0; i <= n; i++) {
			for (j = 0; j <= n; j++) {
				cout<<setw(5)<<right<<list[i][j];
			}
			cout<<endl;
		}
	}

	return 0;
}