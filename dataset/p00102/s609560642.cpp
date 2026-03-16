#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    int n = 0;
    while (1){
	cin >> n;
	if (!n) break;
	vector<vector<int> > matrix(n+1, vector<int>(n+1));
	int input;
	for (int a = 0; a < n; a++){
	    matrix[a][n] = 0;
	    for (int b = 0; b < n; b++){
		cin >> matrix[a][b];
		matrix[a][n] += matrix[a][b];
	    }
	}
	for (int a = 0; a < n; a++){
	    for (int b = 0; b < n; b++){
		matrix[n][b] += matrix[a][b];
	    }
	}
	for (int b = 0; b < n; b++)
	    matrix[n][n] += matrix[n][b];

	for (int a = 0; a < n+1; a++){
	    for (int b = 0; b < n+1; b++)
		cout << right << setw(5) << matrix[a][b];
	    cout << '\n';
	}
    }
}