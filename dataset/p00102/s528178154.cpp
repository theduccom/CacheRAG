#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<set>
#include<iomanip>
int elem[11][11];
using namespace std;

int main() {
	int n; 
	while(cin >> n, n != 0){
		int allsum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> elem[i][j];
				allsum += elem[i][j];
			}
		}
		elem[n][n] = allsum;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				sum += elem[i][j];
			}
			elem[i][n] = sum;
		}
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < n; j++) {
				sum += elem[j][i];
			}
			elem[n][i] = sum;
		}
		
		for(int i=0; i<=n; i++){
			for (int j = 0; j <= n; j++) {
				cout << setw(5) << elem[i][j];
			}cout << endl;
		}
	}
	return 0;
}